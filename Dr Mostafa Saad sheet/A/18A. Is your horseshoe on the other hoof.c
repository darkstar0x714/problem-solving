/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-12 10:26:00
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/228/problem/A
 * @ tags: implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

void bubbleSort(long long arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
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

void countSimiller(long long arr[], int sizeOfArr)
{
    int counter = 0;
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            counter++;
        }
    }
    printf("%d", counter);
}

int main()
{
    long long c1, c2, c3, c4, storeArr[4], trackArr[4] = {0};

    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &storeArr[i]);
    }
    bubbleSort(storeArr, 4);
    countSimiller(storeArr, 4);
}