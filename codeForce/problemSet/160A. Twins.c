/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-10 21:08:32
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/160/problem/A
 * @ tags:  greedy - sorting
 * @ Problem Level:  *900
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
    int counter = 0, numberOfCoins, arrayOfCoins[101] = {0};
    long long sum = 0, firstBoy = 0;

    scanf("%d", &numberOfCoins);

    for (int i = 0; i < numberOfCoins; i++)
    {
        scanf("%d", &arrayOfCoins[i]);
        sum += arrayOfCoins[i];
    }

    bubbleSort(arrayOfCoins, numberOfCoins);

    while (firstBoy <= (sum / 2))
    {
        firstBoy += arrayOfCoins[counter];
        counter++;
    }
    printf("%d", counter);
}