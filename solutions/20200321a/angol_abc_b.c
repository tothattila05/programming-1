#include <stdio.h>

#define ALPHABET_LENGTH 26

void fill_ascii_string(char str[])
{
    for (int i = 0; i < ALPHABET_LENGTH; i++)
    {
        str[i] = 'a' + i;
    }
    str[ALPHABET_LENGTH] = '\0';
}

int main(void)
{
    printf("--- Angol abece (b verzio) ---\n\n");

    char abc_string[ALPHABET_LENGTH + 1];

    fill_ascii_string(abc_string);

    printf("%s\n", abc_string);

    return 0;
}
