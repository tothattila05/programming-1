#include <stdio.h>

int valid_triangle(const double a, const double b, const double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("\nHiba: A haromszog oldalainak pozitiv szamoknak kell lenniuk!\n");
        return 0;
    }

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    double a, b, c;

    printf("--- Megrajzolhato haromszogek ---\n\n");

    printf("Kerjuk adja meg a haromszog 'a' oldalat: ");
    scanf("%lf", &a);

    printf("Kerjuk adja meg a haromszog 'b' oldalat: ");
    scanf("%lf", &b);

    printf("Kerjuk adja meg a haromszog 'c' oldalat: ");
    scanf("%lf", &c);

    int result = valid_triangle(a, b, c);

    if (result == 1)
    {
        printf("\nA haromszog megszerkesztheto.\n");
        return 0;
    }

    printf("\nA haromszog nem megszerkesztheto!\n");
    return 0;
}
