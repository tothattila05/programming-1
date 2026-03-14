#include <stdio.h>
#include <string.h>

int get_strlen(const char *string)
{
    int size = 0;

    while (string[size] != '\0')
    {
        size++;
    }

    return size;
}

int match_ends(const int n, const char *words[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int len = get_strlen(words[i]);

        if (len >= 2 && words[i][0] == words[i][len - 1])
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    printf("--- match_ends ---\n\n");

    const char *words1[] = {"aba", "xyz", "aa", "x", "bbb"};
    int words1_size = 5;
    printf("match_ends(words1) -> %d (Elvart: 3)\n", match_ends(words1_size, words1));

    printf("A words1 elemei:\n");
    for (int i = 0; i < words1_size; i++)
    {
        puts(words1[i]);
    }
    printf("\n");

    const char *words2[] = {"", "x", "xy", "xyx", "xx"};
    int words2_size = 5;
    printf("match_ends(words2) -> %d (Elvart: 2)\n", match_ends(words2_size, words2));

    const char *words3[] = {"aaa", "be", "abc", "hello"};
    int words3_size = 4;
    printf("match_ends(words3) -> %d (Elvart: 1)\n", match_ends(words3_size, words3));

    return 0;
}
