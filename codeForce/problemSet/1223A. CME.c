/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-26 13:20:05
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1223/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long numberOfMatch, numberOfTestCases, equal, rem;

    scanf("%lld", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        scanf("%lld", &numberOfMatch);
        if (numberOfMatch == 2)
        {
            printf("2\n");
            continue;
        }
        if (numberOfMatch % 2 == 0)
        {
            equal = numberOfMatch / 2;
            rem = equal;
            printf("0\n");
            continue;
        }
        else
        {
            equal = (numberOfMatch / 2) + 1;
            rem = equal - 1;
            printf("1\n");
        }
    }
}