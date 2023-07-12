/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-12 21:03:22
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/456/problem/A
 * @ tags:  sorting
 * @ Problem Level:  *1100
 */

#include <stdio.h>
int main()
{
    int a, b, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
        {
            printf("Happy Alex");
            return 0;
        }
    }
    printf("Poor Alex");
}