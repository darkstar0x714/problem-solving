/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-24 10:07:48
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1703/A
 * @ tags:  implementation - strings - brute force
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int numberOfTestCases;
    char inputString[4] = {0};

    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        scanf("%s", inputString);

        for (int i = 0; i < 3; i++)
        {
            if (inputString[i] >= 65 && inputString[i] <= 90)
            {
                inputString[i] = inputString[i] + 32;
            }
        }

        if (strcmp("yes", inputString) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}