/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-06 13:40:54
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1351/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int testCases, a, b;

    scanf("%d", &testCases);

    while (testCases--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
}