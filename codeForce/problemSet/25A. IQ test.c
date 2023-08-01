/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-01 22:26:27
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/25/A
 * @ tags:  brute force
 * @ Problem Level:  *1300
 */

#include <stdio.h>

int temp, evenCount = 0, oddCount = 0, evenIndex, oddIndex, numberOfLen;

int main()
{
    scanf("%d", &numberOfLen);

    for (int i = 0; i < numberOfLen; i++)
    {
        scanf("%d", &temp);
        if (temp % 2 == 0)
        {
            evenCount++;
            evenIndex = i + 1;
        }
        else
        {
            oddCount++;
            oddIndex = i + 1;
        }
    }
    if (oddCount < evenCount)
    {
        printf("%d", oddIndex);
    }
    else
    {
        printf("%d", evenIndex);
    }
}