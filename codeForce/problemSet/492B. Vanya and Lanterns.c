/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-04 09:49:14
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/492/problem/B
 * @ tags:  math - sorting - binary search - implementation
 * @ Problem Level:  *1200
 */

#include <stdio.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

void bubbleSort(long long arr[], long long sizeOfArr)
{
    for (long long i = 0; i < sizeOfArr; i++)
    {
        for (long long j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                long long tempValForSwip = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwip;
            }
        }
    }
}

int main()
{
    long long length, numberOfLights;
    long long pos[1001] = {0}, lastPos = 0;
    double maxDis = 0;
    scanf("%lld%lld", &numberOfLights, &length);

    for (long long i = 0; i < numberOfLights; i++)
    {
        scanf("%lld", &pos[i]);
    }

    bubbleSort(pos, numberOfLights);

    for (int i = 0; i < numberOfLights; i++)
    {
        maxDis = MAX(maxDis, pos[i] - lastPos);
        lastPos = pos[i];
    }
    maxDis = MAX(maxDis / 2.0, MAX(pos[0], length - pos[numberOfLights - 1]));
    printf("%.10f", maxDis);
}