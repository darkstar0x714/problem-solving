/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-24 22:04:30
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1154/problem/A
 * @ tags:  Math
 * @ Problem Level:  *800
 */

#include <stdio.h>

void bubbleSort(long long arr[], long long sizeOfArr) // ascending
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
    long long inputs[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &inputs[i]);
    }

    bubbleSort(inputs, 4);

    for (int i = 0; i < 3; i++)
    {
        printf("%lld ", inputs[3] - inputs[i]);
    }
}