#include <stdio.h>

int main(void)
{
    int a, b, k, t;

    printf("--- Teglalap kerulet es terulet szamito ---\n\n");

    printf("Kerjuk adja meg a teglalap 'a' oldalat: ");
    scanf("%d", &a);

    printf("Kerjuk adja meg a teglalap 'b' oldalat: ");
    scanf("%d", &b);

    k = 2 * (a + b);
    t = a * b;

    printf("\nA teglalap kerulete: %d", k);
    printf("\nA teglalap terulete: %d", t);

    return 0;
}
