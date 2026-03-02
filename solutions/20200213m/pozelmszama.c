#include <stdio.h>

int main()
{
    int szam;
    int pozitiv_db = 0;

    printf("=== Pozitiv elemek szama (0 vegjelig) ===\n");

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);

        if (szam > 0)
        {
            pozitiv_db++;
        }

    } while (szam != 0);

    printf("\nPozitiv elemek szama: %d\n", pozitiv_db);

    return 0;
}