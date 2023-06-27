/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-27 21:25:59
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/673/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int startOfExiting = 0;

int isGameBoring(int start, int end)
{
    if (end - start > 15)
    {
        startOfExiting = start;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int exitingMinCount, exitingMin[91] = {0};

    scanf("%d", &exitingMinCount);
    exitingMin[0] = 0;
    for (int i = 0; i < exitingMinCount; i++)
    {
        scanf("%d", &exitingMin[i + 1]);
    }

    for (int i = 0; i < exitingMinCount; i++)
    {
        if (isGameBoring(exitingMin[i], exitingMin[i + 1]))
        {
            printf("%d", startOfExiting + 15);
            return 0;
        }
    }
    if (exitingMin[exitingMinCount] > 75)
    {
        printf("%d", 90);
    }
    else
    {
        printf("%d", exitingMin[exitingMinCount] + 15);
    }
}