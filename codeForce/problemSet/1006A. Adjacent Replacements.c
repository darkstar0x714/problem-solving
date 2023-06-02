/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-02 19:37:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1006/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i]--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}