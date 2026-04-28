#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("--- fajlban levo egeszek rendezese ---\n");

    if (argc < 2)
    {
        printf("Hiba: Nincs megadva fajl!\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL)
    {
        printf("Hiba: Nem lehet megnyitni a fajlt!\n");
        return 1;
    }

    int numbers[1000] = {0};
    int count = 0;

    while (fscanf(input_file, "%d", &numbers[count]) != EOF)
    {
        count++;
    }
    fclose(input_file);

    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
