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

    printf("--- Teglalap kerulet es terulet szamito (fuggvenyekkel) ---\n\n");

    printf("Kerjuk adja meg a teglalap 'a' oldalat: ");
    scanf("%lf", &a);

    printf("Kerjuk adja meg a teglalap 'b' oldalat: ");
    scanf("%lf", &b);

    double k = szamit_kerulet(a, b);
    double t = szamit_terulet(a, b);

    printf("\nA teglalap kerulete: %.2f", k);
    printf("\nA teglalap terulete: %.2f", t);

    return 0;
}
