/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-27 20:45:37
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/78/problem/B
 * @ tags:  implementation - constructive algorithms
 * @ Problem Level:  *1200
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char colors[8] = "ROYGBIV";
    int n;
    scanf("%d", &n);
    printf("%.3s", colors);
    int j = 3;
    int i;
    for (i = 3; i < n; i++)
    {
        printf("%c", colors[j++]);
        if (j > 6)
            j = 3;
    }
}