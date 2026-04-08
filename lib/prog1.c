#include "prog1.h"
#include <stdio.h>
#include <string.h>

#define BUFSIZE 1024

char *get_string(const char *prompt)
{
    char buf[BUFSIZE];

    printf("%s", prompt);
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';

    return strdup(buf);
}

int get_int(const char *prompt)
{
    int num;

    printf("%s", prompt);
    scanf("%d", &num);

    return num;
}

int get_strlen(const char *string)
{
    int size = 0;

    while (string[size] != '\0')
    {
        size++;
    }

    return size;
}

int is_palindrome(const char *s)
{
    int i = 0;
    int j = get_strlen(s) - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int find_char(const char *s, const char c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }

    return -1;
}
