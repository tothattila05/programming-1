#include <stdio.h>
#include <math.h>

double get_circle_perimeter(double r)
{
    return 2 * r * M_PI;
}

double get_circle_area(double r)
{
    return pow(r, 2) * M_PI;
}

int main()
{
    double r;

    printf("=== Kor kalkulator ===\n");
    printf("Adja meg a kor sugarat: ");

    if (scanf("%lf", &r) == 1 && r >= 0)
    {
        printf("\nEredmenyek:\n");
        printf("Kerulet: %.4f\n", get_circle_perimeter(r));
        printf("Terulet: %.4f\n", get_circle_area(r));
    }
    else
    {
        printf("Hiba: Ervenytelen sugar!\n");
    }

    return 0;
}