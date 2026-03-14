#include <stdio.h>

void line(const char c, const int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", c);
    }

    printf("\n");
}

int main(void)
{
    printf("--- Elvalaszto sor ---\n\n");

    printf("hello\n");
    line('-', 40);
    printf("world\n");

    return 0;
}
