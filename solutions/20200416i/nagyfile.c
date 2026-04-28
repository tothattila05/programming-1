#include <stdio.h>
#include <stdlib.h>

int compare_numbers(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(int argc, char *argv[])
{
    printf("--- bazi nagy fajlban levo egeszek rendezese ---\n");

    if (argc < 2)
    {
        printf("Hiba: Adja meg a fajl nevet!\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL)
    {
        printf("Hiba: A fajl nem talalhato!\n");
        return 1;
    }

    int capacity = 1000000;
    int *numbers = malloc(capacity * sizeof(int));
    int count = 0;

    while (fscanf(input_file, "%d", &numbers[count]) != EOF)
    {
        count++;
        if (count >= capacity)
        {
            capacity *= 2;
            numbers = realloc(numbers, capacity * sizeof(int));
        }
    }

    fclose(input_file);

    qsort(numbers, count, sizeof(int), compare_numbers);

    int i = 0;
    for (i = 0; i < count; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);

    return 0;
}
