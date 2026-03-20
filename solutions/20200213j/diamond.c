#include <stdio.h>

int main(void)
{
    int height, line, spaces, stars;

    printf("--- Diamond ---\n\n");

    printf("Kerjuk adja meg a magassagot: ");
    scanf("%d", &height);

    if (height <= 0 || height % 2 == 0)
    {
        printf("\nHiba: Csak pozitiv paratlan szamot fogadok el!");
        return 1;
    }

    int center = height / 2;

    for (line = 0; line <= center; line++)
    {
        for (spaces = 0; spaces < center - line; spaces++)
        {
            printf(" ");
        }
        for (stars = 0; stars < (2 * line + 1); stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (line = center - 1; line >= 0; line--)
    {
        for (spaces = 0; spaces < center - line; spaces++)
        {
            printf(" ");
        }
        for (stars = 0; stars < (2 * line + 1); stars++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
