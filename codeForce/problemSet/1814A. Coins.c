/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-17 20:55:58
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1814/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <math.h>

int main()
{
    long long n, k;
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        scanf("%lld%lld", &n, &k);
        if (n % 2 == 0)
            printf("YES\n");
        else if (k % 2 == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}