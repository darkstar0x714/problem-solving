/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-19 20:59:24
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1807/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int a, b, c, t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d%d", &a, &b, &c);

        if (a + b == c)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }
}