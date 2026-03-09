#include <stdio.h>

int main()
{
    int num;

    printf("--- Paratlan szamok visszafele ---\n\n");

    printf("Kerjuk adjon meg egy szamot: ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
