/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-13 16:11:28
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/984/problem/A
 * @ tags:  sorting
 * @ Problem Level:  *800
 */

#include <stdio.h>

void bubbleSort(int arr[], int sizeOfArr) // ascending
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                int tempValForSwip = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwip;
            }
        }
    }
}

int main()
{
    int arrLen, arr[1001] = {0};

    scanf("%d", &arrLen);

    for (int i = 0; i < arrLen; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, arrLen);

    if (arrLen % 2 == 0)
    {
        printf("%d", arr[(arrLen / 2) - 1]);
    }
    else
        printf("%d", arr[arrLen / 2]);
}