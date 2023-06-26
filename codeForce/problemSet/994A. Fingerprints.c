/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-25 23:40:40
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/994/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int a[10], b[10], n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
            }
        }
    }
}