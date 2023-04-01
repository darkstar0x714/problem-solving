/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-01 12:32:42
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/467/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfRooms, roomCapacity, roomMaxCapacity, numberOfAvailableRooms = 0;

    scanf("%d", &numberOfRooms);

    for (int i = 0; i < numberOfRooms; i++)
    {
        scanf("%d %d", &roomCapacity, &roomMaxCapacity);
        (roomMaxCapacity - roomCapacity >= 2) ? numberOfAvailableRooms++ : numberOfAvailableRooms;
    }
    printf("%d", numberOfAvailableRooms);
}