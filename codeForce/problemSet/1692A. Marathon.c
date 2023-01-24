/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-22 15:42:34
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1692/problem/A
 * @ tags: implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTestCases, a, b, c, d;
    scanf("%d", &numberOfTestCases);
    for (int i = 0; i < numberOfTestCases; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%d\n", (a < b) + (a < c) + (a < d));
    }
    return 0;
}
