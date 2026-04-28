#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle_chars(int n, char array[])
{
    int i = 0;
    int j = 0;
    char temp = '\0';
    for (i = n - 1; i > 0; i--)
    {
        j = rand() % (i + 1);
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main(void)
{
    printf("--- kellene egy eros jelszo ---\n");

    srand(time(NULL));

    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char special[] = ".,;'";

    char password[13] = "";
    int length = 8 + rand() % 5;

    password[0] = lowercase[rand() % 26];
    password[1] = uppercase[rand() % 26];
    password[2] = digits[rand() % 10];
    password[3] = special[rand() % 4];

    char all_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";
    int i = 0;
    for (i = 4; i < length; i++)
    {
        password[i] = all_chars[rand() % 66];
    }

    shuffle_chars(length, password);

    password[length] = '\0';

    printf("%s\n", password);

    return 0;
}
