#include <stdio.h>

int main()
{
    int num1, num2;

    printf("--- Kisebb, nagyobb, egyenlo ---\n\n");

    printf("Kerjuk adja meg az elso 'n1' szamot: ");
    scanf("%d", &num1);

    printf("Kerjuk adja meg a masodik 'n2' szamot: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\n>");
    }
    else if (num2 > num1)
    {
        printf("\n<");
    }
    else
    {
        printf("\n=");
    }

    return 0;
}
