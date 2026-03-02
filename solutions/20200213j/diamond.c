#include <stdio.h>

int main()
{
    int magassag;
    int sor, oszlop, szunetek, csillagok;

    printf("Kerem a gyemant magassagat (pozitiv paratlan szam): ");
    scanf("%d", &magassag);

    if (magassag <= 0 || magassag % 2 == 0)
    {
        printf("Hiba: Csak pozitiv paratlan szamot fogadunk el!\n");
        return 1;
    }

    int kozep = magassag / 2;

    for (sor = 0; sor <= kozep; sor++)
    {
        for (szunetek = 0; szunetek < kozep - sor; szunetek++)
        {
            printf(" ");
        }
        for (csillagok = 0; csillagok < (2 * sor + 1); csillagok++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (sor = kozep - 1; sor >= 0; sor--)
    {
        for (szunetek = 0; szunetek < kozep - sor; szunetek++)
        {
            printf(" ");
        }

        for (csillagok = 0; csillagok < (2 * sor + 1); csillagok++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}