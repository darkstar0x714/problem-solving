/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-18 13:29:08
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1822/problem/C
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, x;
        scanf("%lld", &n);
        x = (n * n) + (2 * n) + 2;
        printf("%lld\n", x);
    }

    return 0;
}