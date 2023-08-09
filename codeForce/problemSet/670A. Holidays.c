/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-09 20:29:14
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/670/A
 * @ tags:  math - greedy - constructive algorithms - brute force
 * @ Problem Level:  *900
 */

#include <stdio.h>

int main()
{
    long long days;

    scanf("%lld", &days);

    long long perfectWeeks = days / 7;
    long long unPerfectWeeks = days % 7;

    if (unPerfectWeeks == 0)
    {
        printf("%lld %lld", perfectWeeks * 2, perfectWeeks * 2);
    }
    else
    {
        printf("%lld %lld", (perfectWeeks * 2) + ((unPerfectWeeks == 6) ? 1 : 0), (perfectWeeks * 2) + ((unPerfectWeeks == 1) ? 1 : 2));
    }
}