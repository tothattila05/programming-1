#include <stdio.h>

void print_array(const int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

void make_positive(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = -arr[i];
        }
    }
}

int main(void)
{
    printf("--- Pozitiv hozzaallas ---\n\n");

    int numbers[] = {12, -5, 8, -99, 0, 34, -1};
    int size = 7;

    printf("A tomb atalakitas elott:\n");
    print_array(numbers, size);

    make_positive(numbers, size);

    printf("\nA tomb atalakitas utan:\n");
    print_array(numbers, size);

    return 0;
}
