#include <stdio.h>

int main()
{
    int osszeg = 0;
    int i;

    printf("=== Project Euler #1: 3 es 5 tobbszoroseinek osszege ===\n");

    for (i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            osszeg = osszeg + i;
        }
    }

    printf("Az 1000-nel kisebb, 3-mal vagy 5-tel oszthato szamok osszege: %d\n", osszeg);

    return 0;
}