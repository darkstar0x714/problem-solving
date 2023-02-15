/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-09 22:22:40
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1669/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int rate, numberOfTestCases;

    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        scanf("%d", &rate);

        if (rate <= 1399)
        {
            printf("Division 4\n");
        }
        else if (rate >= 1400 && rate <= 1599)
        {
            printf("Division 3\n");
        }

        else if (rate >= 1600 && rate <= 1899)
        {
            printf("Division 2\n");
        }
        else
        {
            printf("Division 1\n");
        }
    }
}