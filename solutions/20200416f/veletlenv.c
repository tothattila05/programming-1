#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[])
{
    int random_index = rand() % n;
    return tomb[random_index];
}

int main(void)
{
    printf("--- tomb veletlenszeruen kivalasztott eleme ---\n");

    srand(time(NULL));

    int my_numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    int result = choice(size, my_numbers);

    printf("A valasztott elem: %d\n", result);

    return 0;
}
