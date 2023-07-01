/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-01 22:39:27
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1345/problem/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int t, n, m;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &n, &m);
        puts(n == 1 || m == 1 || (n == 2 && m == 2) ? "YES" : "NO");
    }
}