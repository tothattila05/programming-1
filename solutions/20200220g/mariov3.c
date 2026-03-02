#include <stdio.h>

int main()
{
    int magassag;
    int sor, oszlop;

    printf("magassag: ");
    scanf("%d", &magassag);

    for (sor = 1; sor <= magassag; sor++)
    {
        for (oszlop = 1; oszlop <= magassag - sor; oszlop++)
        {
            printf(" ");
        }

        for (oszlop = 1; oszlop <= sor; oszlop++)
        {
            printf("#");
        }

        printf("  ");

        for (oszlop = 1; oszlop <= sor; oszlop++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}