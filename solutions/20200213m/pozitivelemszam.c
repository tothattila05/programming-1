#include <stdio.h>

int main(void)
{
    int num;
    int quantity = 0;

    printf("--- Pozitiv elemek szama ---\n\n");

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &num);

        if (num > 0)
        {
            quantity++;
        }
    } while (num != 0);

    printf("\nPozitiv elemek szama: %d", quantity);

    return 0;
}
