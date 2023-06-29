/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-29 21:33:32
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1077/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long numberOfTests, a, b, k, ans = 0;

    scanf("%lld", &numberOfTests);

    while (numberOfTests--)
    {
        ans = 0;
        scanf("%lld%lld%lld", &a, &b, &k);
        ans = a * (k / 2 + k % 2) - b * (k / 2);
        printf("%lld\n", ans);
    }
}