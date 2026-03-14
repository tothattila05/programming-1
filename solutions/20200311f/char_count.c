#include <stdio.h>

int char_count(const char *s, const char c)
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    printf("--- Karakter elofordulasanak szama (char_count) ---\n\n");

    printf("char_count(\"Abba\", 'b') -> %d (Elvart: 2)\n", char_count("Abba", 'b'));
    printf("char_count(\"Abba\", 'a') -> %d (Elvart: 1)\n", char_count("Abba", 'a'));
    printf("char_count(\"Abba\", 'x') -> %d (Elvart: 0)\n", char_count("Abba", 'x'));

    return 0;
}
