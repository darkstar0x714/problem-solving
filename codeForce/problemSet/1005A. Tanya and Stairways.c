/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-05 21:13:29
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1005/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfStairs, Stirs[1001] = {0}, numberOfFloors, floors[1001] = {0};

    scanf("%d", &numberOfStairs);

    for (int i = 0; i < numberOfStairs; i++)
    {
        scanf("%d", &Stirs[i]);
        if (Stirs[i] == 1 && i != 0)
        {
            floors[numberOfFloors] = Stirs[i - 1];
            numberOfFloors++;
        }
        if (i == numberOfStairs - 1)
        {
            floors[numberOfFloors] = Stirs[i];
        }
    }

    printf("%d\n", numberOfFloors + 1);

    for (int i = 0; i < numberOfFloors + 1; i++)
    {
        printf("%d ", floors[i]);
    }
}