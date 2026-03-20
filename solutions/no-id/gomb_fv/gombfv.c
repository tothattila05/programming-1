#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double szamit_felszin(double r)
{
    return 4 * M_PI * r * r;
}

double szamit_terfogat(double r)
{
    return (4.0 * M_PI * r * r * r) / 3.0;
}

int main(void)
{
    double r;

    printf("--- Gomb felszin es terfogat szamito (fuggvenyekkel) ---\n\n");

    printf("Kerem adja meg a gomb sugarat: ");
    scanf("%lf", &r);

    double f = szamit_felszin(r);
    double t = szamit_terfogat(r);

    printf("\nA gomb felszine: %.4f", f);
    printf("\nA gomb terfogata: %.4f", t);

    return 0;
}
