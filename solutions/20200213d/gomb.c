#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    double r, f, t;

    printf("--- Gomb felszin es terfogat szamito ---\n\n");

    printf("Kerem adja meg a gomb sugarat: ");
    scanf("%lf", &r);

    f = 4 * M_PI * r * r;
    t = (4 * M_PI * r * r * r) / 3.0;

    printf("\nA gomb felszine: %.4f", f);
    printf("\nA gomb terfogata: %.4f", t);

    return 0;
}
