#include <stdio.h>

int main()
{
    int sum = 0;

    printf("--- Egesz szamok osszege 1-tol 100-ig ---\n");

    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }

    printf("\nAz egesz szamok osszege (ciklus): %d", sum);

    sum = 100;
    sum = sum * (sum + 1) / 2;

    printf("\nAz egesz szamok osszege (Gauss): %d", sum);

    return 0;
}
