#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    const char *id;
    const char *filename;
    const char *content;
} template_t;

const char *help_text =
    "alap v0.1.9,\n\n"
    "Usage: alap <template_id> [option]\n\n"
    "Available options:\n\n"
    "-h, --help       show this help\n"
    "-v, --version    version info\n"
    "--stdout         don't create source file, print result to stdout\n\n"
    "Available templates:\n\n"
    "* c        - C source code [main.c]\n"
    "* java     - Java source code [Main.java]\n"
    "* py       - Python 3 source code [main.py]\n"
    "* sh       - Bash source code [main.sh]\n";

const template_t templates[] = {
    {
        "c",
        "main.c",
        "#include <stdio.h>\n"
        "\n"
        "int main() {\n"
        "    printf(\"hello\\n\");\n\n"
        "    return 0;\n"
        "}\n"
    },
    {
        "py",
        "main.py",
        "#!/usr/bin/env python3\n"
        "\n"
        "def main():\n"
        "    print(\"Py3\")\n"
        "\n"
        "##################################\n"
        "\n"
        "if __name__ == '__main__':\n"
        "    main()\n"
    },
    {
        "sh",
        "main.sh",
        "#!/bin/bash\n"
        "\n"
        "echo \"Hello, Bash!\"\n"
    },
    {
        "java",
        "Main.java",
        "public class Main {\n"
        "    public static void main(String[] args) {\n"
        "        System.out.println(\"Hello, Java!\");\n"
        "    }\n"
        "}\n"
    }
};

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("%s", help_text);
        return 0;
    }

    int use_stdout = 0;
    const char *selected_id = NULL;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
        {
            printf("%s", help_text);
            return 0;
        }
        else if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--version") == 0)
        {
            printf("alap v0.1.9\n");
            return 0;
        }
        else if (strcmp(argv[i], "--stdout") == 0)
        {
            use_stdout = 1;
        }
        else if (argv[i][0] != '-')
        {
            selected_id = argv[i];
        }
    }

    if (selected_id == NULL)
    {
        printf("%s", help_text);
        return 0;
    }

    int num_templates = sizeof(templates) / sizeof(templates[0]);
    const template_t *selected_template = NULL;

    for (int i = 0; i < num_templates; i++)
    {
        if (strcmp(selected_id, templates[i].id) == 0)
        {
            selected_template = &templates[i];
            break;
        }
    }

    if (selected_template == NULL)
    {
        printf("Error: Unknown template '%s'\n", selected_id);
        return 1;
    }

    if (use_stdout)
    {
        printf("%s", selected_template->content);
    }
    else
    {
        FILE *file_check = fopen(selected_template->filename, "r");
        if (file_check != NULL)
        {
            fclose(file_check);
            printf("Error: the file '%s' already exists\n", selected_template->filename);
            return 1;
        }

        FILE *out_file = fopen(selected_template->filename, "w");
        if (out_file == NULL)
        {
            printf("Error: could not create file '%s'\n", selected_template->filename);
            return 1;
        }

        fputs(selected_template->content, out_file);
        fclose(out_file);

        printf("# `%s` was created\n", selected_template->filename);
    }

    return 0;
}
