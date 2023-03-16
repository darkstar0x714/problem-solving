/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-16 15:34:01
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1426/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTests, numberOfApartmentInFloor, apartmentOfTarget, floorOfTarget = 1;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        scanf("%d%d", &apartmentOfTarget, &numberOfApartmentInFloor);
        apartmentOfTarget = apartmentOfTarget - 2;
        while (apartmentOfTarget > 0)
        {
            floorOfTarget++;
            apartmentOfTarget = apartmentOfTarget - numberOfApartmentInFloor;
        }
        printf("%d\n", floorOfTarget);
        floorOfTarget = 1;
    }
}