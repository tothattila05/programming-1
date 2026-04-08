#include "prog1.h"
#include <stdio.h>
#include <stdlib.h> // free()

int main(void)
{
    printf("--- prog1.h Fuggvenyek Tesztelese ---\n\n");

    printf("[1] get_strlen teszt:\n");
    const char *teszt_szo = "Almafa";
    printf("A \"%s\" szo hossza: %d (Elvart: 6)\n\n", teszt_szo, get_strlen(teszt_szo));

    printf("[2] is_palindrome teszt:\n");
    const char *pal1 = "radar";
    const char *pal2 = "cica";
    printf("A \"%s\" palindrom? %s\n", pal1, is_palindrome(pal1) ? "Igen (1)" : "Nem (0)");
    printf("A \"%s\" palindrom? %s\n\n", pal2, is_palindrome(pal2) ? "Igen (1)" : "Nem (0)");

    printf("[3] find_char teszt:\n");
    const char *keresoszo = "programozas";
    char betu1 = 'g';
    char betu2 = 'x';
    printf("A '%c' betu indexe a \"%s\" szoban: %d (Elvart: 3)\n", betu1, keresoszo, find_char(keresoszo, betu1));
    printf("A '%c' betu indexe a \"%s\" szoban: %d (Elvart: -1)\n\n", betu2, keresoszo, find_char(keresoszo, betu2));

    printf("[4] get_string teszt:\n");
    char *bekert_szoveg = get_string("Irj be egy szoveget: ");
    printf("Ezt irtad be: %s\n", bekert_szoveg);

    free(bekert_szoveg);
    printf("\n");

    printf("[5] get_int teszt:\n");
    int bekert_szam = get_int("Irj be egy szamot: ");
    printf("Ezt a szamot irtad be: %d\n", bekert_szam);

    return 0;
}
