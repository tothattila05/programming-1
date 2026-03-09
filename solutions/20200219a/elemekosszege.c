#include <stdio.h>

int main()
{
    int num;
    int sum = 0;

    printf("--- Elemek osszege ---\n\n");

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("\nElemek osszege: %d", sum);

    return 0;
}
