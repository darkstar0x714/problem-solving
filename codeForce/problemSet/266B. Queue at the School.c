/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-03 21:41:14
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/266/problem/B
 * @ tags:  shortest paths - implementation - graph matchings - constructive algorithms
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char a[51] = {0};
    scanf("%s", a);
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 'B' && a[i + 1] == 'G')
            {
                a[i] = 'G';
                a[i + 1] = 'B';
                i++;
            }
        }
    }
    printf("%s\n", a);
}
