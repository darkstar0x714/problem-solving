/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-17 19:58:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/460/A
 * @ tags:  math - implementation - brute force
 * @ Problem Level:  *900
 */

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int days = 0;
    int socks = n;

    while (socks > 0)
    {
        days++;
        socks--;

        if (days % m == 0)
        {
            socks++;
        }
    }

    printf("%d", days);
}
