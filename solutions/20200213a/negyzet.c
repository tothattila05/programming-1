#include <stdio.h>

int main()
{
    int a;
    int kerulet, terulet;

    printf("=== Negyzet kerulet es terulet szamito ===\n");

    printf("Kerem adja meg a negyzet oldalanak hosszat (egesz szam): ");
    scanf("%d", &a);

    kerulet = 4 * a;
    terulet = a * a;

    printf("\n--- Eredmenyek ---\n");
    printf("A megadott oldal: a = %d\n", a);
    printf("A negyzet kerulete: %d\n", kerulet);
    printf("A negyzet terulete: %d\n", terulet);

    return 0;
}