/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-31 16:22:08
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/339/problem/B
 * @ tags:  implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <math.h>

int main()
{
    long long numberOfHouses, tasksListItems, nextStation, steps = 0, currentStation = 1;

    scanf("%lld %lld", &numberOfHouses, &tasksListItems);

    for (long long i = 0; i < tasksListItems; i++)
    {
        scanf("%lld", &nextStation);
        if (nextStation >= currentStation)
        {
            steps += abs(nextStation - currentStation);
        }
        else
        {
            steps += (numberOfHouses - currentStation) + nextStation;
        }
        currentStation = nextStation;
    }
    printf("%lld", steps);
}