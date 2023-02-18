/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-18 20:56:41
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/705/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfLayers;

    scanf("%d", &numberOfLayers);

    for (int i = 1; i <= numberOfLayers; i++)
    {
        if (i % 2 == 0 && i == numberOfLayers)
        {
            printf("I love it");
        }
        else if (i % 2 != 0 && i == numberOfLayers)
            printf("I hate it");
        else if (i % 2 == 0 && i != numberOfLayers)
        {
            printf("I love that ");
        }
        else if (i % 2 != 0 && i != numberOfLayers)
            printf("I I hate that ");
    }
}