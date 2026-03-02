#include <stdio.h>

int main()
{
    int osszeg = 0;
    int i;

    printf("=== Egesz szamok osszege 1-tol 100-ig ===\n\n");

    for (i = 1; i <= 100; i++)
    {
        osszeg = osszeg + i;
    }

    printf("Szamitas ciklussal (for loop):\n");
    printf("Az eredmeny: %d\n\n", osszeg);

    int n = 100;
    int gauss_osszeg = n * (n + 1) / 2;

    printf("Szamitas Gauss modszerevel (keplettel):\n");
    printf("Az eredmeny: %d\n", gauss_osszeg);

    return 0;
}