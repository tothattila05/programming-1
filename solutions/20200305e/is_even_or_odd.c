#include <stdio.h>

int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }

    return 0;
}

int is_odd(int n)
{
    if (is_even(n) == 0)
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    int num;

    printf("--- Paros? Paratlan? ---\n\n");

    printf("Kerem adjon meg egy egesz szamot: ");
    scanf("%d", &num);

    printf("\n[is_even teszt]\n");
    if (is_even(num) == 1)
    {
        printf("A(z) %d paros szam.\n", num);
    }
    else
    {
        printf("A(z) %d nem paros szam.\n", num);
    }

    printf("\n[is_odd teszt]\n");
    if (is_odd(num) == 1)
    {
        printf("A(z) %d paratlan szam.\n", num);
    }
    else
    {
        printf("A(z) %d nem paratlan szam.\n", num);
    }

    return 0;
}
