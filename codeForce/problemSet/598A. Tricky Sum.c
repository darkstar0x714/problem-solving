/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-31 21:49:39
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/598/A
 * @ tags:  math
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <math.h>

long long highestPowerof2(long long n)
{
    long long p = (long long)log2(n);
    return p;
}

int main()
{
    int numberOfTests;
    long long x, sum = 0, diff = 0;
    scanf("%d", &numberOfTests);
    for (int i = 0; i < numberOfTests; i++)
    {
        scanf("%lld", &x);
        sum = x * (x + 1) / 2;
        diff = pow(2, highestPowerof2(x) + 1) - 1;
        sum -= 2 * diff;
        printf("%lld\n", sum);
    }
}