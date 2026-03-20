#include <stdio.h>

int main(void)
{
    int num;

    printf("--- Neggyel oszthato szamok ---\n\n");

    printf("Kerjuk adjon meg egy szamot: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
