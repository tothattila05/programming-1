#include <stdio.h>

int get_positive_int(void)
{
    int n = 0;

    while (n <= 0)
    {
        printf("Kerem adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &n);
    }

    return n;
}

int main()
{
    printf("--- get_positive_int() [while] ---\n\n");

    int num = get_positive_int();
    printf("\nA sikeresen beolvasott pozitiv szam: %d", num);

    return 0;
}
