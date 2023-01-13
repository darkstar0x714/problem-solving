/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-13 18:43+1:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/4/a || https://codeforces.com/contest/4/problem/A
 * @ tags: math - brute force
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && w != 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}