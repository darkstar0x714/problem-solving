/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-26 12:31:21
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/116/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfStations, peopleOut = 0, peopleIn = 0, peopleInsideTrim = 0;

    long long numberOfPeopleAtEachStation[1000] = {0};
    scanf("%d", &numberOfStations);

    for (int i = 0; i < numberOfStations; i++)

    {
        scanf("%d %d", &peopleOut, &peopleIn);
        peopleInsideTrim = peopleInsideTrim - peopleOut + peopleIn;
        numberOfPeopleAtEachStation[i] = peopleInsideTrim;
    }

    // finding max number
    for (int i = 1; i < 1000; ++i)
    {
        if (numberOfPeopleAtEachStation[0] < numberOfPeopleAtEachStation[i])
        {
            numberOfPeopleAtEachStation[0] = numberOfPeopleAtEachStation[i];
        }
    }

    printf("%lld", numberOfPeopleAtEachStation[0]);
}
