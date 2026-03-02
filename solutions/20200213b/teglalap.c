#include <stdio.h>

int main()
{
    int a, b;
    int kerulet, terulet;

    printf("--- Teglalap kerulet es terulet szamito ---\n");

    printf("Kerem adja meg a teglalap 'a' oldalanak hosszat (egesz szam): ");
    scanf("%d", &a);

    printf("Kerem adja meg a teglalap 'b' oldalanak hosszat (egesz szam): ");
    scanf("%d", &b);

    kerulet = 2 * (a + b);
    terulet = a * b;

    printf("\n--- Eredmenyek ---\n");
    printf("A megadott oldalak: a = %d, b = %d\n", a, b);
    printf("A teglalap kerulete: %d\n", kerulet);
    printf("A teglalap terulete: %d\n", terulet);

    return 0;
}