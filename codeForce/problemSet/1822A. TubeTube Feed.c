/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-14 22:37:37
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1822/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int q, n, t, i, s, c;
    int a[55];
    int b[55];
    scanf("%d", &q);
    while (q--)
    {
        scanf("%d%d", &n, &t);
        s = 0;
        c = -1;
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &b[i]);
            if (((a[i] + i - 1) <= t) && b[i] > s)
            {
                s = b[i];
                c = i;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}