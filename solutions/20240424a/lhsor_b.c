#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("--- leghosszabb sor keresese (b) ---\n");

    if (argc < 2)
    {
        printf("Hiba: Adja meg a bemeneti fajlt!\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Hiba: Nem sikerult megnyitni a fajlt!\n");
        return 1;
    }

    int max_length = -1;
    int max_line_num = 0;

    int current_line_num = 1;
    int current_length = 0;
    int c = 0;

    while ((c = fgetc(file)) != EOF)
    {
        if (c == '\n')
        {
            if (current_length > max_length)
            {
                max_length = current_length;
                max_line_num = current_line_num;
            }
            current_line_num++;
            current_length = 0;
        }
        else
        {
            current_length++;
        }
    }

    if (current_length > 0)
    {
        if (current_length > max_length)
        {
            max_length = current_length;
            max_line_num = current_line_num;
        }
    }

    if (max_line_num > 0)
    {
        printf("%d %d\n", max_line_num, max_length);
    }

    fclose(file);
    return 0;
}
