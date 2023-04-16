/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-14 17:27:19
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/466/A
 * @ tags:  implementation
 * @ Problem Level:  *1200
 */

#include <stdio.h>

int main()
{
    double numberOfTravels, numberOfStationPerSpacialTicket, normalCost, spacialCost;
    double totalCost = 0;
    scanf("%lf%lf%lf%lf", &numberOfTravels, &numberOfStationPerSpacialTicket, &normalCost, &spacialCost);
    if (spacialCost / numberOfStationPerSpacialTicket >= normalCost)
    {
        totalCost = numberOfTravels * normalCost;
    }
    else
    {
        totalCost = (int)(numberOfTravels / numberOfStationPerSpacialTicket) * spacialCost;
        if (spacialCost > ((int)numberOfTravels % (int)numberOfStationPerSpacialTicket) * normalCost)
        {
            totalCost += ((int)numberOfTravels % (int)numberOfStationPerSpacialTicket) * normalCost;
        }
        else
            totalCost += spacialCost;
    }

    printf("%d", (int)totalCost);
}