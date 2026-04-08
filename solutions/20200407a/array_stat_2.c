#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

typedef struct
{
    int min;
    int max;
    double avg;
} ArrayStats;

ArrayStats get_array_stats(const int arr[], int size)
{
    ArrayStats stats;
    int i;
    int sum = arr[0];

    stats.min = arr[0];
    stats.max = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < stats.min)
        {
            stats.min = arr[i];
        }
        if (arr[i] > stats.max)
        {
            stats.max = arr[i];
        }
        sum += arr[i];
    }

    stats.avg = (double)sum / size;

    return stats;
}

int main(void)
{
    int arr[SIZE];
    int i;
    ArrayStats result;

    printf("--- Array Statistics With Struct ---\n");

    srand(time(NULL));

    printf("A tomb elemei: ");
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 90 + 10;

        printf("%d", arr[i]);
        if (i < SIZE - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    result = get_array_stats(arr, SIZE);

    printf("Legkisebb elem: %d\n", result.min);
    printf("Legnagyobb elem: %d\n", result.max);
    printf("Az elemek atlaga: %.1f\n", result.avg);

    return 0;
}
