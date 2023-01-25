/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-25 12:19:04
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/69/A
 * @ tags:  math - implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int xSum = 0;
    int ySum = 0;
    int zSum = 0;

    while (n--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        xSum += x;
        ySum += y;
        zSum += z;
    }

    if (xSum == 0 && ySum == 0 && zSum == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}