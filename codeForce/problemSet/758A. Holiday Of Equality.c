/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-15 21:33:41
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/758/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

void bubbleSort(long long arr[], long long sizeOfArr) // ascending
{
    for (long long i = 0; i < sizeOfArr; i++)
    {
        for (long long j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                long long tempValForSwip = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwip;
            }
        }
    }
}

int main()
{
    int numberOfPeoples;
    long long money[101] = {0}, moneyNeeded = 0;

    scanf("%d", &numberOfPeoples);

    for (long long i = 0; i < numberOfPeoples; i++)
    {
        scanf("%lld", &money[i]);
    }

    bubbleSort(money, numberOfPeoples);

    for (long long i = 1; i <= numberOfPeoples; i++)
    {
        moneyNeeded = moneyNeeded + (money[numberOfPeoples - 1] - money[numberOfPeoples - i]);
    }

    printf("%lld", moneyNeeded);
}