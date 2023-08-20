/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-16 11:37:04
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/463/problem/B
 * @ tags:  math - implementation - brute force
 * @ Problem Level:  *1100
 */

#include <stdio.h>

int main()
{
    int numberOfBuildings, money = 0;
    scanf("%d", &numberOfBuildings);
    for (int i = 0; i < numberOfBuildings; i++)
    {
        int hight = 0;
        scanf("%d", &hight);
        if (hight > money)
        {
            money = hight;
        }
    }
    printf("%d", money);
}