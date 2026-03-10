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

int main(void)
{
    printf("--- Tomb elemei vesszovel elvalasztva ---\n\n");

    int numbers[] = {4, 7, 34, 23, 67};
    int size = 5;

    printf("A tomb elemei:\n");
    print_array(numbers, size);

    return 0;
}
