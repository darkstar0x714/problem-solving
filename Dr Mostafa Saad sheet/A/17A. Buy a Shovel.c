/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-11 10:20:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/732/problem/A
 * @ tags: implementation - math - constructive algorithms - brute force
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int costOfShovel, coin, shovelNumber = 1, buyCost;

    scanf("%d %d", &costOfShovel, &coin);
    while ((((costOfShovel * shovelNumber) - coin) % 10 != 0) && (((costOfShovel * shovelNumber) % 10 != 0)))
    {
        shovelNumber++;
    }
    printf("%d", shovelNumber);
}