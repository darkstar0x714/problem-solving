/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-21 21:38:07
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/318/problem/A
 * @ tags:  math
 * @ Problem Level:  *900
 */

#include <stdio.h>
int main()
{
    long long n, k, i, j, ans;

    scanf("%lld %lld", &n, &k);

    i = (n + 1) / 2;

    if (k <= i)
        ans = 2 * k - 1;

    else
        ans = (k - i) * 2;

    printf("%lld\n", ans);
}
