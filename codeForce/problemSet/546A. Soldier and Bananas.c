/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-24 12:45:43
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/546/A
 * @ tags: brute force - implementation - math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int cost = 0;
    for (int i = 1; i <= w; i++)
    {
        cost += i * k;
    }
    int borrow = cost - n;
    if (borrow > 0)
    {
        printf("%d", borrow);
    }
    else
    {
        printf("0");
    }
    return 0;
}