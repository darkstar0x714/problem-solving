/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-01 13:18:51
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1742/problem/B
 * @ tags:  greedy - sorting - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

void bubbleSort(long long arr[], int sizeOfArr)
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
    int numberOfTests, arrLen, flag = 0;
    long long arr[100] = {0};

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        scanf("%d", &arrLen);
        for (int i = 0; i < arrLen; i++)
        {
            scanf("%lld", &arr[i]);
        }
        bubbleSort(arr, arrLen);
        for (long long i = 0; i < arrLen - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                flag = 1;
                break;
            }
        }
        (flag) ? printf("NO\n") : printf("YES\n");
        flag = 0;
    }
}