#include <stdio.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    double dx = (double)(p2.x - p1.x);
    double dy = (double)(p2.y - p1.y);
    return sqrt(dx * dx + dy * dy);
}

int main(void)
{
    Pont a = {1, 2};
    Pont b = {6, 5};

    printf("--- 2D Point Distance ---\n");

    printf("A ket pont kozti tavolsag: %lf\n", distance(a, b));

    return 0;
}
