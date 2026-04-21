#include <stdio.h>
#include <stdlib.h>

int get_number_of_lines(const char *file_name)
{
    FILE *file_ptr = fopen(file_name, "r");
    if (file_ptr == NULL)
    {
        return -1;
    }

    int line_count = 0;
    int current_char;
    int last_char = '\n';

    while ((current_char = fgetc(file_ptr)) != EOF)
    {
        if (current_char == '\n')
        {
            line_count++;
        }
        last_char = current_char;
    }

    if (last_char != '\n' && last_char != EOF)
    {
        line_count++;
    }

    fclose(file_ptr);
    return line_count;
}

int main(int argc, char *argv[])
{
    printf("--- fajlban levo sorok szama ---\n");

    if (argc < 2)
    {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    int result = get_number_of_lines(argv[1]);

    if (result == -1)
    {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 2;
    }

    printf("%d\n", result);

    return 0;
}
