/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-01 22:21:23
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/805/A
 * @ tags:  math - greedy
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int main()
{
    long long start, end, primeFlag = 0;

    scanf("%lld %lld", &start, &end);

    if (start == end)
    {
        printf("%lld", start);
    }
    else
    {
        printf("%lld", 2);
    }
}