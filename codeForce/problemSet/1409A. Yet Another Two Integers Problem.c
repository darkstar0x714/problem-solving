/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-22 20:25:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1409/A
 * @ tags:  math - greedy
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <math.h>

int main()
{
    long long testCases, a, b, counter, dif;
    scanf("%lld", &testCases);

    while (testCases--)
    {
        counter = 0;

        scanf("%lld %lld", &a, &b);

        dif = abs(a - b);

        printf("%lld\n", (dif / 10) + ((dif % 10 >= 1)));
    }
}