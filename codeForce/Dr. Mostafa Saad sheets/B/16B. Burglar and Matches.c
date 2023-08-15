/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-15 22:13:58
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/16/problem/B
 * @ tags:  greedy - implementation - sortings
 * @ Problem Level:  *900
 */

#include <stdio.h>

struct MatchBox
{
    long long quantity;
    long long matchs;
};

void bubbleSort(struct MatchBox arr[], int sizeOfArr) // descending
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j].matchs < arr[j + 1].matchs))
            {
                int tempValForSwip1 = arr[j].matchs;
                int tempValForSwip2 = arr[j].quantity;

                arr[j].matchs = arr[j + 1].matchs;
                arr[j].quantity = arr[j + 1].quantity;

                arr[j + 1].matchs = tempValForSwip1;
                arr[j + 1].quantity = tempValForSwip2;
            }
        }
    }
}

int main()
{
    long long numberCanCarry, availableContainers;
    struct MatchBox s1[21];

    scanf("%lld%lld", &numberCanCarry, &availableContainers);

    for (long long i = 0; i < availableContainers; i++)
    {
        scanf("%lld%lld", &(s1[i].quantity), &s1[i].matchs);
    }

    bubbleSort(s1, availableContainers);

    long long stolenBoxs = 0;
    long long stolenMatches = 0;
    long long counter = 0;

    while (stolenBoxs < numberCanCarry && counter < availableContainers)
    {

        if (s1[counter].quantity > 0)
        {
            if (s1[counter].quantity < numberCanCarry - stolenBoxs)
            {
                stolenBoxs += s1[counter].quantity;
                stolenMatches += s1[counter].matchs * s1[counter].quantity;
                s1[counter].quantity = 0;
            }
            else
            {
                long long reqBoxs = numberCanCarry - stolenBoxs;
                stolenMatches += s1[counter].matchs * reqBoxs;
                break;
            }
        }
        else
        {
            counter++;
        }
    }
    printf("%lld", stolenMatches);
}