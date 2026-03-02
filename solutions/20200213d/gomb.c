#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    double felszin, terfogat;

    printf("=== Gomb felszin es terfogat szamito ===\n");

    printf("Kerem adja meg a gomb sugarat (r): ");
    scanf("%lf", &r);

    felszin = 4 * M_PI * pow(r, 2);
    terfogat = (4 * M_PI * pow(r, 3)) / 3.0;

    printf("\n--- Eredmenyek ---\n");
    printf("A gomb sugara: %.2f\n", r);
    printf("A gomb felszine: %.4f\n", felszin);
    printf("A gomb terfogata: %.4f\n", terfogat);

    return 0;
}