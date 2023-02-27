/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-27 14:48:44
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1335/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        long long numberOfCandies;
        scanf("%lld", &numberOfCandies);
        if (numberOfCandies <= 2)
        {
            printf("0\n");
            // printf("%lld\n", 0);  this line lead to an error return a very big number and i don't know why
        }
        else if (numberOfCandies % 2 == 0)
        {
            printf("%lld\n", (numberOfCandies / 2) - 1);
        }
        else
        {
            printf("%lld\n", (numberOfCandies / 2));
        }
    }
}