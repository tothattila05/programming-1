#include <stdio.h>

int main()
{
    int a, k, t;

    printf("--- Negyzet kerulet es terulet szamito ---\n\n");

    printf("Kerem adja meg a negyzet oldalanak hosszat: ");
    scanf("%d", &a);

    k = 4 * a;
    t = a * a;

    printf("\nA negyzet kerulete: %d", k);
    printf("\nA negyzet terulete: %d", t);

    return 0;
}