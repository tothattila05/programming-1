#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("--- Lotto (a verzio) ---\n\n");

    char buffer[1024];
    int count;
    int lower_bound;
    int upper_bound;

    printf("Hany db random szamot kersz?\n");
    fgets(buffer, sizeof(buffer), stdin);
    count = atoi(buffer);

    printf("Also hatar: ");
    fgets(buffer, sizeof(buffer), stdin);
    lower_bound = atoi(buffer);

    printf("Felso hatar (zart intervallum): ");
    fgets(buffer, sizeof(buffer), stdin);
    upper_bound = atoi(buffer);

    srand(time(NULL));

    printf("\nA generalt szamok: ");

    for (int i = 0; i < count; i++)
    {
        int random_number = (rand() % (upper_bound - lower_bound + 1)) + lower_bound;
        printf("%d", random_number);

        if (i < count - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
