#include <stdio.h>

int contains_char(const char *s, const char c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    printf("--- Karakter keresese a sztringben (contains_char) ---\n\n");

    const char *test_string = "Programozas";
    char char1 = 'm';
    char char2 = 'x';

    if (contains_char(test_string, char1) == 1)
    {
        printf("A \"%s\" szo TARTALMAZZA a '%c' betut.\n", test_string, char1);
    }
    else
    {
        printf("A \"%s\" szo NEM TARTALMAZZA a '%c' betut.\n", test_string, char1);
    }

    if (contains_char(test_string, char2) == 1)
    {
        printf("A \"%s\" szo TARTALMAZZA a '%c' betut.\n", test_string, char2);
    }
    else
    {
        printf("A \"%s\" szo NEM TARTALMAZZA a '%c' betut.\n", test_string, char2);
    }

    return 0;
}
