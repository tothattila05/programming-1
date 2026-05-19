#include <stdio.h>

long long sum_of_squares(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (long long)i * i;
    }
    return sum;
}

long long square_of_sum(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum * sum;
}

int main(void)
{
    printf("--- sum square difference PE#6 ---\n");

    int limit = 100;
    long long diff = 0;

    diff = square_of_sum(limit) - sum_of_squares(limit);

    printf("A kulonbseg az elso %d termeszetes szam eseten: %lld\n", limit, diff);

    return 0;
}
