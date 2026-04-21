#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("--- legrovidebb szavak ---\n");

    if (argc < 2)
    {
        fprintf(stderr, "Nem adtal meg egyetlen szot sem!\n");
        return 1;
    }

    int min_length = strlen(argv[1]);

    for (int i = 2; i < argc; i++)
    {
        int current_length = strlen(argv[i]);
        if (current_length < min_length)
        {
            min_length = current_length;
        }
    }

    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) == min_length)
        {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}
