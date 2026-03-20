#include <stdio.h>

#define ALPHABET_LENGTH 26

void fill_ascii_array(char arr[])
{
    for (int i = 0; i < ALPHABET_LENGTH; i++)
    {
        arr[i] = 'a' + i;
    }
}

int main(void)
{
    printf("--- Angol abece (a verzio) ---\n\n");

    char abc_array[ALPHABET_LENGTH];

    fill_ascii_array(abc_array);

    for (int i = 0; i < ALPHABET_LENGTH; i++)
    {
        printf("%c", abc_array[i]);
    }
    printf("\n");

    return 0;
}
