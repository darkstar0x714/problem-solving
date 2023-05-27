/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-27 10:53:25
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1003/A
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

int findMaxSimilarCount(int arr[], int size)
{
    int maxCount = 1;
    int count = 1;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
            }
            count = 1;
        }
    }

    if (count > maxCount)
    {
        maxCount = count;
    }

    return maxCount;
}

int main()
{
    int numberOfCoins, coins[101] = {0};
    scanf("%d", &numberOfCoins);

    for (int i = 0; i < numberOfCoins; i++)
    {
        scanf("%d", &coins[i]);
    }

    bubbleSort(coins, numberOfCoins);

    printf("%d", findMaxSimilarCount(coins, numberOfCoins));
}