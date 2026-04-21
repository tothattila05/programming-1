#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("--- 0,5-nel nagyobb szamok szurese ---\n");

    FILE *input_file = fopen("in.txt", "r");
    if (input_file == NULL)
    {
        fprintf(stderr, "Hiba! Az in.txt nem nyithato meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    FILE *output_file = fopen("out.txt", "w");
    if (output_file == NULL)
    {
        fprintf(stderr, "Hiba! Az out.txt nem hozhato letre!\n");
        fclose(input_file);
        return 2;
    }

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    double current_number;
    int count = 0;

    while (fscanf(input_file, "%lf", &current_number) == 1)
    {
        if (current_number > 0.5)
        {
            fprintf(output_file, "%lf\n", current_number);
            count++;
        }
    }

    printf("# szures vege\n");

    fclose(input_file);
    fclose(output_file);

    printf("# out.txt bezarva\n");
    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", count);

    return 0;
}
