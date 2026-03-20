#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    double r, k, t;

    printf("--- Kor kerulet es terulet szamito ---\n\n");

    printf("Kerjuk adja meg a kor sugarat: ");
    scanf("%lf", &r);

    k = 2 * r * M_PI;
    t = r * r * M_PI;

    printf("\nA kor kerulete: %.4f", k);
    printf("\nA kor terulete: %.4f", t);

    return 0;
}
