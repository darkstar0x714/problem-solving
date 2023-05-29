/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-29 10:16:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1701/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int numberOfTestCases, a, b, c, d;

int main()
{
    scanf("%d", &numberOfTestCases);
    while (numberOfTestCases--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a + b + c + d == 0)
            printf("0\n");
        else if (a + b + c + d == 4)
            printf("2\n");
        else
            printf("1\n");
    }
}