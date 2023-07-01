/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-01 21:59:13
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/47/problem/A
 * @ tags:  math - brute force
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int flag = 0, numberOfDotsPerTriangle, numberOfDotsPerSide = 500;

    scanf("%d", &numberOfDotsPerTriangle);

    for (int i = 1; i < 501; i++)
    {
        numberOfDotsPerSide = (i * (i + 1)) / 2;
        if (numberOfDotsPerSide == numberOfDotsPerTriangle)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}