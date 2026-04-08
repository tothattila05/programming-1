#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_strong_password(const char *pwd)
{
    int has_lower = 0;
    int has_upper = 0;
    int has_digit = 0;
    int i;

    if (strlen(pwd) < 8)
    {
        return 0;
    }

    for (i = 0; pwd[i] != '\0'; i++)
    {
        if (islower(pwd[i]))
        {
            has_lower = 1;
        }
        else if (isupper(pwd[i]))
        {
            has_upper = 1;
        }
        else if (isdigit(pwd[i]))
        {
            has_digit = 1;
        }
    }

    return has_lower && has_upper && has_digit;
}

int main(void)
{
    char password[256];

    printf("--- Strong Password Checker ---\n");
    printf("Adj meg jelszavakat '*' vegjelig!\n\n");

    while (1)
    {
        printf("jelszo: ");
        if (scanf("%255s", password) != 1)
        {
            break;
        }

        if (strcmp(password, "*") == 0)
        {
            break;
        }

        if (is_strong_password(password))
        {
            printf("eros jelszo\n\n");
        }
        else
        {
            printf("gyenge jelszo\n\n");
        }
    }

    return 0;
}
