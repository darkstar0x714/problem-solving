/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-01 05:01:48
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/791/problem/A
 * @ tags: implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int LimakWeight, BobWeight, years = 0;

    scanf("%d %d", &LimakWeight, &BobWeight);
    while (LimakWeight <= BobWeight)
    {
        years++;
        LimakWeight = LimakWeight * 3;
        BobWeight = BobWeight * 2;
    }
    printf("%d", years);
    return 0;
}