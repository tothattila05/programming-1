#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double szamit_kerulet(double r)
{
    return 2 * r * M_PI;
}

double szamit_terulet(double r)
{
    return r * r * M_PI;
}

int main()
{
    double r;

    printf("--- Kor kerulet es terulet szamito (fuggvenyekkel) ---\n\n");

    printf("Kerjuk adja meg a kor sugarat: ");
    scanf("%lf", &r);

    double k = szamit_kerulet(r);
    double t = szamit_terulet(r);

    printf("\nA kor kerulete: %.4f", k);
    printf("\nA kor terulete: %.4f", t);

    return 0;
}
