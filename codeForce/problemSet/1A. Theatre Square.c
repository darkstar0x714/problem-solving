/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-13 18:43+1:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1/a || https://codeforces.com/contest/1/problem/A
 * @ tags: math
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int main()
{
    long long n, m, a, flagStones = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    flagStones = ((m + a - 1) / a) * ((n + a - 1) / a); // ((m+a-1)/a) is the mathematical formula of ceil(m/a)

    printf("%lld", flagStones);
}