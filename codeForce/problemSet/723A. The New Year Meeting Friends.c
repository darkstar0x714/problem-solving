/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-14 12:44:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/723/A
 * @ tags:  implementation - sorting - math
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <math.h>

void bubbleSort(int arr[], int sizeOfArr)
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
    int arr[3] = {0}, steps = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 3);

    steps = (abs(arr[1] - arr[0])) + (abs(arr[2] - arr[1]));

    printf("%d", steps);
}