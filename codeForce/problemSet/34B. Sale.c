/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-04 20:00:15
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/34/B
 * @ tags:  greedy - sorting
 * @ Problem Level:  *900
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
    int numberOfTVSets, maxNumberCanCarry, array[101], earnedMoney = 0;

    scanf("%d%d", &numberOfTVSets, &maxNumberCanCarry);
    for (int i = 0; i < numberOfTVSets; i++)
    {
        scanf("%d", &array[i]);
    }
    bubbleSort(array, numberOfTVSets);
    for (int i = 0; i < maxNumberCanCarry; i++)
    {
        if (array[i] >= 0)
        {
            break;
        }
        else
            earnedMoney += array[i];
    }
    printf("%d", -1 * earnedMoney);
}