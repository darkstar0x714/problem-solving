/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-04 12:38:06
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/38/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int d[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &d[i]);
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int years = 0;
    for (int i = a - 1; i < b - 1; i++)
    {
        years += d[i];
    }

    printf("%d\n", years);

    return 0;
}
