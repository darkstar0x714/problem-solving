/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-17 21:31:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/469/A
 * @ tags:  greedy - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

void bubbleSort(int arr[], int sizeOfArr) // descending
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] < arr[j + 1]))
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
    int numberOfGameLevels, xLevels, yLevels, arr[101] = {0}, counter = 0;

    scanf("%d", &numberOfGameLevels);
    scanf("%d", &xLevels);
    for (int i = 0; i < xLevels; i++)
    {
        int temp;
        scanf("%d", &temp);

        arr[temp - 1] = 1;
    }
    scanf("%d", &yLevels);
    for (int i = 0; i < yLevels; i++)
    {
        int temp;
        scanf("%d", &temp);

        arr[temp - 1] = 1;
    }
    bubbleSort(arr, numberOfGameLevels);
    for (int i = 0; i < numberOfGameLevels; i++)
    {
        if (arr[i] == 1)
        {
            counter++;
        }
    }
    if (counter == numberOfGameLevels)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
}