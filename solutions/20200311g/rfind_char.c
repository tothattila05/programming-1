#include <stdio.h>

int get_strlen(const char *string)
{
    int size = 0;

    while (string[size] != '\0')
    {
        size++;
    }

    return size;
}

int rfind_char(const char *s, const char c)
{
    int length = get_strlen(s);

    for (int i = length - 1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            return i;
        }
    }

    return -1;
}

int main(void)
{
    printf("--- Karakter utolso elofordulasa (rfind_char) ---\n\n");

    printf("rfind_char(\"Abba\", 'b') -> %d (Elvart: 2)\n", rfind_char("Abba", 'b'));
    printf("rfind_char(\"Abba\", 'a') -> %d (Elvart: 3)\n", rfind_char("Abba", 'a'));
    printf("rfind_char(\"Abba\", 'x') -> %d (Elvart: -1)\n", rfind_char("Abba", 'x'));
    printf("rfind_char(\"Aladar\", 'a') -> %d (Elvart: 4)\n", rfind_char("Aladar", 'a'));

    return 0;
}
