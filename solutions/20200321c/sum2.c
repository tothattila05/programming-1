#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("--- Ket szam osszege ---\n\n");

    if (argc != 3)
    {
        printf("Hiba! Ket parametert (szamot) kell megadni.\n");
        exit(1);
    }

    int num_1 = atoi(argv[1]);
    int num_2 = atoi(argv[2]);

    int sum = num_1 + num_2;

    printf("%d\n", sum);

    return 0;
}
