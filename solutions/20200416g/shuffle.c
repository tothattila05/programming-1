#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[])
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = n - 1; i > 0; i--)
    {
        j = rand() % (i + 1);

        temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main(void)
{
    printf("--- shuffle muvelet (tomb elemeinek az osszekeverese) ---\n");

    srand(time(NULL));

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int i = 0;

    shuffle(n, numbers);

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
