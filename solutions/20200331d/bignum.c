#include <stdio.h>
#include <string.h>

int main(void)
{
    char big_number[10000];
    int sum = 0;
    int i;

    printf("--- Bazi Nagy Szam ---\n");
    printf("Szam: ");

    if (scanf("%9999s", big_number) == 1)
    {
        for (i = 0; big_number[i] != '\0'; i++)
        {
            if (big_number[i] >= '0' && big_number[i] <= '9')
            {
                sum += big_number[i] - '0';
            }
        }

        printf("\nA szamjegyek osszege: %d\n", sum);
    }

    return 0;
}
