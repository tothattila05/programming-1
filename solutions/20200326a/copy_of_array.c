#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("--- Tombrol masolat ---\n\n");

    char buffer[1024];

    printf("Hany db szamot szeretnel bevinni?\n");
    fgets(buffer, sizeof(buffer), stdin);
    int count = atoi(buffer);

    int original_array[count];
    int abs_array[count];

    for (int i = 0; i < count; i++)
    {
        printf("%d. szam: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        original_array[i] = atoi(buffer);
    }

    for (int i = 0; i < count; i++)
    {
        abs_array[i] = abs(original_array[i]);
    }

    printf("\nA bevitt szamok abszolutertekei: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", abs_array[i]);
        if (i < count - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    printf("A megadott szamok: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", original_array[i]);
        if (i < count - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
