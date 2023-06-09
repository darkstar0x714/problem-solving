/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-09 15:26:57
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1678/A
 * @ tags:  implementation
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
    int numberOfTestCases;
    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        int length, arr[101] = {0}, flag = 0, steps;

        scanf("%d", &length);
        steps = length + 1;
        int zeros = 0;

        for (int i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] == 0)
            {
                zeros++;
            }
        }
        bubbleSort(arr, length);
        if (zeros)
        {
            printf("%d\n", length - zeros);
        }
        else
        {
            int repeated = 0;

            for (int i = 1; i < length; i++)
            {
                if (arr[i] == arr[i - 1])
                {
                    repeated = 1;
                    break;
                }
            }
            if (repeated)
            {
                printf("%d\n", length);
            }
            else
            {
                printf("%d\n", length + 1);
            }
        }
    }
}