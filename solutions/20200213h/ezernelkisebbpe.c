#include <stdio.h>

int main(void)
{
    int sum = 0;

    printf("--- Project Euler #1: 3 es 5 tobbszoroseinek osszege ---\n\n");

    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }

    printf("\nAz 1000-nel kisebb,\n3-mal vagy 5-tel oszthato szamok osszege: %d", sum);

    return 0;
}
