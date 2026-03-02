#include <stdio.h>
#include <math.h>

double get_double()
{
    double ertek;
    scanf("%lf", &ertek);
    return ertek;
}

double szamit_felszin(double r)
{
    return 4 * M_PI * r * r;
}

double szamit_terfogat(double r)
{
    return (4.0 * M_PI * r * r * r) / 3.0;
}

int main()
{
    double sugar;

    printf("=== Gomb kalkulator ===\n");

    printf("Adja meg a gomb sugarat: ");

    sugar = get_double();

    if (sugar >= 0)
    {
        printf("\nEredmenyek:\n");
        printf("A gomb felszine: %.4f\n", szamit_felszin(sugar));
        printf("A gomb terfogata: %.4f\n", szamit_terfogat(sugar));
    }
    else
    {
        printf("Hiba: Negativ sugar nem ertelmezheto!\n");
    }

    return 0;
}