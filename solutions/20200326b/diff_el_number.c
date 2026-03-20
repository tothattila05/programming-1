#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("--- Kulonbozo elemek szama ---\n\n");
    printf("Adj meg 0 vegjelig egesz szamokat az [1, 99] intervallumbol!\n");

    int present[100] = {0};
    char buffer[1024];
    int num;

    while (1)
    {
        printf("Szam: ");
        fgets(buffer, sizeof(buffer), stdin);
        num = atoi(buffer);

        if (num == 0)
        {
            break;
        }

        if (num < 1 || num > 99)
        {
            printf("Ez a szam kivul esik az elfogadhato intervallumon!\n");
        }
        else
        {
            present[num] = 1;
        }
    }

    int unique_count = 0;
    for (int i = 1; i <= 99; i++)
    {
        if (present[i] == 1)
        {
            unique_count++;
        }
    }

    printf("\n%d db kulonbozo szam lett megadva.\n", unique_count);

    if (unique_count > 0)
    {
        printf("Ezek (novekvo sorrendben): ");
        int printed_count = 0;
        for (int i = 1; i <= 99; i++)
        {
            if (present[i] == 1)
            {
                printf("%d", i);
                printed_count++;
                if (printed_count < unique_count)
                {
                    printf(", ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
