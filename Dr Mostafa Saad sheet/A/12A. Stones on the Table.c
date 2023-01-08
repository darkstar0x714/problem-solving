/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-07 14:32:14
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/266/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char arr[51];
    int onTableStones, stonesToBeRemoved = 0;

    scanf("%d", &onTableStones);
    scanf("%s", &arr);

    for (int i = 0; i < onTableStones; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            stonesToBeRemoved++;
        }
    }
    printf("%d", stonesToBeRemoved);
}