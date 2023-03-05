/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-05 20:55:09
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/581/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    int red, blue, fashionable, normal;

    scanf("%d%d", &red, &blue);

    fashionable = MIN(red, blue);

    normal = (MAX(red, blue) - MIN(red, blue)) / 2;

    printf("%d %d", fashionable, normal);
}