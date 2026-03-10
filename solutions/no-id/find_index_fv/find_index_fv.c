#include <stdio.h>

int find_index(const int arr[], const int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main(void)
{
    printf("--- Elem indexenek keresese (find_index fv.) ---\n\n");

    int numbers[] = {45, 12, 89, 5, 73, 22, -8, 100, 3};
    int size = 9;

    int target_num = 73;
    int position = find_index(numbers, size, target_num);

    if (position != -1)
    {
        printf("Megtalalva! A(z) %d szam a(z) %d. indexen van.\n", target_num, position);
    }
    else
    {
        printf("A(z) %d szam NINCS a tombben.\n", target_num);
    }

    return 0;
}
