/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-03 22:35:21
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/707/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int n, m;
    char temp;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m * n; i++)
    {
        scanf(" %c", &temp);
        if (temp == 'Y' || temp == 'M' || temp == 'C')
        {
            printf("#Color");
            return 0;
        }
    }
    printf("#Black&White");
}