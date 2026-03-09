#include <stdio.h>

int main()
{
    int height;

    printf("--- Mario V3 ---\n\n");

    printf("Kerjuk adja meg a magassagot: ");
    scanf("%d", &height);

    for (int line = 1; line <= height; line++)
    {
        int column;

        for (column = 1; column <= height - line; column++)
        {
            printf(" ");
        }

        for (column = 1; column <= line; column++)
        {
            printf("#");
        }

        printf("  ");

        for (column = 1; column <= line; column++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
