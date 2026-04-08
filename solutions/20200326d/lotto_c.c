#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(int arr[], int size, int val)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            return 1;
        }
    }
    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, lower, upper;
    int i, r;
    int *arr;

    printf("--- Lotto Version C ---\n");

    printf("Hany db random szamot kersz?\n");
    if (scanf("%d", &n) != 1)
        return 1;

    printf("Also hatar: ");
    if (scanf("%d", &lower) != 1)
        return 1;

    printf("Felso hatar (zart intervallum): ");
    if (scanf("%d", &upper) != 1)
        return 1;

    if (n <= 0 || upper < lower || n > (upper - lower + 1))
    {
        printf("Ervenytelen bemenet.\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }

    srand(time(NULL));

    for (i = 0; i < n;)
    {
        r = (rand() % (upper - lower + 1)) + lower;
        if (!contains(arr, i, r))
        {
            arr[i] = r;
            i++;
        }
    }

    qsort(arr, n, sizeof(int), compare);

    printf("\nA generalt szamok: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    free(arr);

    return 0;
}
