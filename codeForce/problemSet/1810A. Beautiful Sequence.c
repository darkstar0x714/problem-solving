/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 18:31:10
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1810/A
 * @ tags:  greedy - brute force
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int i, n, a, flag = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a);
            if (a <= i)
                flag = 1;
        }
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}