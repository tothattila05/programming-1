#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    printf("--- valos szamok osszege ---\n");

    FILE *file_ptr = fopen("valos_szamok.txt", "r");
    if (file_ptr == NULL)
    {
        fprintf(stderr, "Hiba! A fajlt nem sikerult megnyitni!\n");
        return 1;
    }

    double sum = 0.0;
    char buffer[128];

    while (fscanf(file_ptr, "%s", buffer) == 1)
    {
        for (int i = 0; buffer[i] != '\0'; i++)
        {
            if (buffer[i] == ',')
            {
                buffer[i] = '.';
            }
        }

        double current_number = atof(buffer);
        sum += current_number;
    }

    fclose(file_ptr);

    printf("%.20lf\n", sum);

    return 0;
}
