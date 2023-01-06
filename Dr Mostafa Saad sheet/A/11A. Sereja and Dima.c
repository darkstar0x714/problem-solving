/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-05 21:13:18
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/381/problem/A
 * @ tags:  implementation - comparing
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long serejaPoints = 0, dimaPoints = 0;
    int numberOfCards, array[1001], leftIndex = 0, rightIndex, serejaTurn = 1, dimaTurn = 0, choosenCard;

    scanf("%d", &numberOfCards);
    for (int i = 0; i < numberOfCards; i++)
    {
        scanf("%d", &array[i]);
    }

    leftIndex = 0;
    rightIndex = numberOfCards - 1;

    while (leftIndex <= rightIndex)
    {
        if (array[leftIndex] > array[rightIndex])
        {
            choosenCard = array[leftIndex];
            leftIndex++;
        }
        else
        {
            choosenCard = array[rightIndex];
            rightIndex--;
        }
        if (serejaTurn == 1)
        {
            serejaPoints = serejaPoints + choosenCard;
            serejaTurn = 0;
            dimaTurn = 1;
        }
        else if (dimaTurn == 1)
        {
            dimaPoints = dimaPoints + choosenCard;
            serejaTurn = 1;
            dimaTurn = 0;
        }
    }

    printf("%lld %lld", serejaPoints, dimaPoints);
}