#include <stdio.h>

double szamit_kerulet(double a, double b)
{
    return 2 * (a + b);
}

double szamit_terulet(double a, double b)
{
    return a * b;
}

int main()
{
    double a, b;

    printf("=== Teglalap kalkulator (fuggvenyekkel) ===\n");

    // Adatbekeres
    printf("Adja meg az 'a' oldalt: ");
    scanf("%lf", &a);
    printf("Adja meg a 'b' oldalt: ");
    scanf("%lf", &b);

    double kerulet = szamit_kerulet(a, b);
    double terulet = szamit_terulet(a, b);

    printf("\nEredmenyek:\n");
    printf("Kerulet: %.2f\n", kerulet);
    printf("Terulet: %.2f\n", terulet);

    return 0;
}