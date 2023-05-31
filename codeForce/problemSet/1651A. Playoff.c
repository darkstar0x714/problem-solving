/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-31 11:09:52
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1651/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", (int)pow(2, n) - 1);
    }
}