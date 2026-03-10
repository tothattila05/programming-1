#include <stdio.h>

int contains(const int arr[], const int size, const int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    printf("--- Tartalmazza a tomb az elemet? (contains fv.) ---\n\n");

    int numbers[] = {45, 12, 89, 5, 73, 22, -8, 100, 3};
    int size = 9;

    int target_num = 73;

    if (contains(numbers, size, target_num) == 1)
    {
        printf("A tomb TARTALMAZZA a(z) %d szamot.\n", target_num);
    }
    else
    {
        printf("A tomb NEM TARTALMAZZA a(z) %d szamot.\n", target_num);
    }

    return 0;
}
