#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void get_array_stats(const int arr[], int size, int *min, int *max, double *avg)
{
    int i;
    int sum = arr[0];

    *min = arr[0];
    *max = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        sum += arr[i];
    }

    *avg = (double)sum / size;
}

int main(void)
{
    int arr[SIZE];
    int min_val, max_val;
    double avg_val;
    int i;

    printf("--- Array Statistics ---\n");

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

    get_array_stats(arr, SIZE, &min_val, &max_val, &avg_val);

    printf("Legkisebb elem: %d\n", min_val);
    printf("Legnagyobb elem: %d\n", max_val);
    printf("Az elemek atlaga: %.1f\n", avg_val);

    return 0;
}
