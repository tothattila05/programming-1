#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    printf("--- sorok generalasa (a) ---\n");

    if (argc < 4)
    {
        printf("Hasznalat: %s <sorok_szama> <min_hossz> <max_hossz>\n", argv[0]);
        return 1;
    }

    int num_lines = atoi(argv[1]);
    int min_len = atoi(argv[2]);
    int max_len = atoi(argv[3]);

    srand(time(NULL));

    int i = 0;
    int j = 0;
    for (i = 0; i < num_lines; i++)
    {
        int current_len = min_len + rand() % (max_len - min_len + 1);
        for (j = 0; j < current_len; j++)
        {
            char c = 33 + rand() % 94;
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}
