/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-16 10:24:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/158/a || https://codeforces.com/contest/158/problem/A
 * @ tags:  special problem  -  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

void descendingBubbleSort(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] < arr[j + 1]))
            {
                int tempValForSwipe = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwipe;
            }
        }
    }
}

void printArr(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int numberOfPlayer, playerScore[101] = {'j'}, qualifiedEdge, qualifiedEdgeScore, counterOfQualifiedPlayers = 0;

    scanf("%d %d", &numberOfPlayer, &qualifiedEdge);

    for (int i = 0; i < numberOfPlayer; i++)
    {
        scanf("%d", &playerScore[i]);
    }

    descendingBubbleSort(playerScore, numberOfPlayer);

    qualifiedEdgeScore = playerScore[qualifiedEdge - 1];

    for (int i = 0; i < numberOfPlayer; i++)
    {
        if ((playerScore[i] >= qualifiedEdgeScore) && (playerScore[i] > 0))
        {
            counterOfQualifiedPlayers++;
        }
        else
        {
            break;
        }
    }

    printf("%d", counterOfQualifiedPlayers);
}