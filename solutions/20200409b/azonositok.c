#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char *input)
{
    int length = strlen(input);

    if (length == 0)
    {
        return 0;
    }

    if (!isalpha(input[0]) && input[0] != '_')
    {
        return 0;
    }

    for (int i = 1; i < length; i++)
    {
        if (!isalnum(input[i]) && input[i] != '_')
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    printf("--- C azonositok ---\n");
    printf("Adj meg sztringeket '*' vegjelig!\n\n");

    char buffer[1024];

    while (1)
    {
        printf("Input: ");

        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            break;
        }

        int len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }

        if (strcmp(buffer, "*") == 0)
        {
            break;
        }

        if (is_valid_c_identifier(buffer))
        {
            printf("YES\n\n");
        }
        else
        {
            printf("NO\n\n");
        }
    }

    return 0;
}
