#include <stdio.h>

int get_positive_int(void)
{
    int n;

    do
    {
        printf("Kerem adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &n);
    } while (n <= 0);

    return n;
}

int main(void)
{
    printf("--- get_positive_int() [do_while] ---\n\n");

    int num = get_positive_int();
    printf("\nA sikeresen beolvasott pozitiv szam: %d", num);

    return 0;
}
