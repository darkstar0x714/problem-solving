/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-06 16:07:10
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1283/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int totalMinInDay = 60 * 24, hours, mins, minRemine, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &hours, &mins);

        minRemine = totalMinInDay - (mins + hours * 60);

        printf("%d\n", minRemine);
    }
}