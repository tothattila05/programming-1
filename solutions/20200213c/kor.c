#include <stdio.h>
#include <math.h>

int main()
{
    double sugar;
    double kerulet, terulet;

    printf("=== Kor Kerulet es Terulet Szamito ===\n");

    printf("Kerem, adja meg a kor sugarat: ");
    scanf("%lf", &sugar);

    kerulet = 2 * sugar * M_PI;
    terulet = sugar * sugar * M_PI;

    printf("\n--- Eredmenyek ---\n");
    printf("A megadott sugar: r = %.2f\n", sugar);
    printf("A kor kerulete: %.4f\n", kerulet);
    printf("A kor terulete: %.4f\n", terulet);

    return 0;
}