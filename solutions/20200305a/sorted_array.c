#include <stdio.h>

int is_sorted(const int arr[], const int size)
{
    if (size <= 1)
    {
        return 1;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    printf("--- Tomb rendezettseg vizsgalata ---\n\n");

    int arr[] = {1, 2, 3, 8, 5, 6};
    int size = 6;

    if (is_sorted(arr, size) == 1)
    {
        printf("A tomb rendezett.");
    }
    else
    {
        printf("A tomb nem rendezett.");
    }

    return 0;
}
