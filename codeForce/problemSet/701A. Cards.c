/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-14 22:07:51
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/701/A
 * @ tags:  greedy - implementation
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

int linearSearch(int a[], int n, int key)
{
    int pos = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == key)
        {
            pos = i;
            a[i] = -1;
            break;
        }
    }
    return pos + 1;
}

int main()
{
    int numberOfCards, cards[101] = {0}, SortedCards[101] = {0};

    scanf("%d", &numberOfCards);

    for (int i = 0; i < numberOfCards; i++)
    {
        scanf("%d", &cards[i]);
        SortedCards[i] = cards[i];
    }

    bubbleSort(SortedCards, numberOfCards);

    for (int i = 0; i < numberOfCards / 2; i++)
    {
        printf("%d %d\n", linearSearch(cards, numberOfCards, SortedCards[i]), linearSearch(cards, numberOfCards, SortedCards[numberOfCards - i - 1]));
    }
}