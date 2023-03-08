/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-08 20:16:04
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1512/A
 * @ tags:
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
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        int arrLen, arr[101] = {0}, arr2[101] = {0}, spyVal, spyIndex;
        scanf("%d", &arrLen);
        for (int i = 0; i < arrLen; i++)
        {
            scanf("%d", &arr[i]);
            arr2[i] = arr[i];
        }
        bubbleSort(arr, arrLen);
        if (arr[0] != arr[1])
        {
            spyVal = arr[0];
        }
        else
        {
            spyVal = arr[arrLen - 1];
        }

        for (int i = 0; i < arrLen; i++)
        {
            if (arr2[i] == spyVal)
            {
                spyIndex = i + 1;
                printf("%d\n", spyIndex);
                break;
            }
        }
    }
}