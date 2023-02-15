/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-10 22:23:29
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/768/problem/A
 * @ tags:  constructive algorithms - sorting
 * @ Problem Level:  *900
 */

#include <stdio.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
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
    long long numberOfStewards, array[100001], counter = 0, maxCounter = 0, minCounter = 0, max = 0, min = 99999999999;
    scanf("%lld", &numberOfStewards);

    for (long long i = 0; i < numberOfStewards; i++)
    {
        scanf("%lld", &array[i]);
        max = MAX(max, array[i]);
        min = MIN(min, array[i]);
    }
    for (long long i = 0; i < numberOfStewards; i++)
    {
        if (min == array[i])
        {
            minCounter++;
        }
    }
    for (long long i = numberOfStewards - 1; i >= 0; i--)
    {
        if (max == array[i])
        {
            maxCounter++;
        }
    }
    printf("%lld", (numberOfStewards <= 2 || min == max) ? 0 : numberOfStewards - minCounter - maxCounter);
}
