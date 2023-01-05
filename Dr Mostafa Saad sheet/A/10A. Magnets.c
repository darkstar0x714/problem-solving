/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-04 11:21:17
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/344/problem/A
 * @ tags: implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long numberOfMagnets, magnetString = 0;
    int magnetType, prevMagnetType = 6;

    scanf("%lld", &numberOfMagnets);

    for (long long i = 0; i < numberOfMagnets; i++)
    {
        scanf("%d", &magnetType);
        if (magnetType != prevMagnetType)
        {
            magnetString++;
            prevMagnetType = magnetType;
        }
    }
    printf("%lld", magnetString);
}