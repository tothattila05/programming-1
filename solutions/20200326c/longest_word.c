#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    printf("--- Megadott leghosszabb szo ---\n\n");
    printf("Adj meg szavakat '*' vegjelig!\n");

    char buffer[1024];
    int word_count = 0;
    int max_length = 0;
    int current_length;

    while (1)
    {
        printf("Szo: ");
        fgets(buffer, sizeof(buffer), stdin);

        buffer[strcspn(buffer, "\n")] = '\0';

        if (strcmp(buffer, "*") == 0)
        {
            break;
        }

        word_count++;
        current_length = strlen(buffer);

        if (current_length > max_length)
        {
            max_length = current_length;
        }
    }

    printf("\n%d db szot adtal meg. A leghosszabb szo %d karakterbol all.\n", word_count, max_length);

    return 0;
}
