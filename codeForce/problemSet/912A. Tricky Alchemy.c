/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-23 09:32:02
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/912/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

#include <stdio.h>

int main()
{
    long long a, b, g, y, bl;

    scanf("%lld %lld", &a, &b);
    scanf("%lld %lld %lld", &y, &g, &bl);
    long long sumA = y * 2 + g;
    long long sumB = bl * 3 + g;
    if ((sumA - a) < 0)
        sumA = 0;
    else
        sumA = sumA - a;
    if ((sumB - b) < 0)
        sumB = 0;
    else
        sumB = sumB - b;
    printf("%lld", sumA + sumB);
    return 0;
}