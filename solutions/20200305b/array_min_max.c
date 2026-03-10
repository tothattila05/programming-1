#include <stdio.h>

int get_min(const int arr[], const int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int get_max(const int arr[], const int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main(void)
{
    printf("--- Tomb legkisebb / legnagyobb eleme ---\n\n");

    int numbers[] = {45, 12, 89, 5, 73, 22, -8, 100, 3};
    int size = 9;

    printf("A tomb elemei: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int min = get_min(numbers, size);
    int max = get_max(numbers, size);

    printf("\nA legkisebb elem: %d", min);
    printf("\nA legnagyobb elem: %d", max);

    return 0;
}
