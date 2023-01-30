/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-30 21:31:48
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1760/problem/A
 * @ tags: implementing - sorting
 * @ Problem Level:  *800
 */

#include <stdio.h>

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
    int testsNumber, arr[3] = {0}, val;
    scanf("%d", &testsNumber);

    while (testsNumber--)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &val);
            arr[i] = val;
        }
        bubbleSort(arr, 3);
        printf("%d\n", arr[1]);
    }
}