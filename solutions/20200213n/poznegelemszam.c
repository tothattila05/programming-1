#include <stdio.h>

int main(void)
{
    int num;
    int pos_quantity = 0;
    int neg_quantity = 0;

    printf("--- Pozitiv es negativ elemek szama ---\n\n");

    do
    {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &num);

        if (num > 0)
        {
            pos_quantity++;
        }
        else if (num < 0)
        {
            neg_quantity++;
        }
    } while (num != 0);

    printf("\nPozitiv elemek szama: %d", pos_quantity);
    printf("\nNegativ elemek szama: %d", neg_quantity);

    return 0;
}
