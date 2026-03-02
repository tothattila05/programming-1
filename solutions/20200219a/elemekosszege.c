#include <stdio.h>

int main()
{
    int szam;
    int osszeg = 0;

    printf("=== Elemek osszege (0 vegjelig) ===\n");

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
        osszeg += szam;

    } while (szam != 0);

    printf("\nElemek osszege: %d\n", osszeg);

    return 0;
}