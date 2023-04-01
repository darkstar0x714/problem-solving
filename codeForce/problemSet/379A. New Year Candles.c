/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-01 12:43:52
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/379/A
 * @ tags:  implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int main()
{
    int a, b;
    long long numberOfHours = 0;

    scanf("%d%d", &a, &b);
    while (a >= b)
    {
        numberOfHours += b;
        a -= b;
        a++;
    }
    printf("%lld", numberOfHours + a);
}