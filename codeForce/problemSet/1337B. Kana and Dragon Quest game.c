/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-05 23:03:43
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1337/B
 * @ tags:  greedy - implementation - math
 * @ Problem Level:  *900
 */

#include <stdio.h>

int main()
{
    int t, x, n, m;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d%d", &x, &n, &m);

        while (n >= 1 && x > 20)
        {
            n--;
            x = (x / 2) + 10;
        }
        x -= m * 10;

        if (x > 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}