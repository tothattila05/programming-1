#include <stdio.h>

int get_positive_int(void)
{
    int n;

    while (1)
    {
        printf("Kerem adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &n);

        if (n > 0)
        {
            break;
        }
    }

    return n;
}

int main(void)
{
    printf("--- get_positive_int() [infinite_while] ---\n\n");

    int num = get_positive_int();
    printf("\nA sikeresen beolvasott pozitiv szam: %d", num);

    return 0;
}
