/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-20 21:47:59
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/580/a || https://codeforces.com/contest/580/problem/A
 * @ tags:  brute force  - implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    long long earnings[100001] = {0}, numberOfDays, maxStrike = 0, lastStrike = 0;
    int firstRun = 1;
    scanf("%lld", &numberOfDays);

    for (long long i = 0; i < numberOfDays; i++)
    {
        scanf("%lld", &earnings[i]);
    }
    for (long long i = 0; i < numberOfDays; i++)
    {
        if ((firstRun) || (earnings[i] >= earnings[i - 1]))
        {
            maxStrike++;
            firstRun = 0;
        }
        else
        {
            if (maxStrike > lastStrike)
            {
                lastStrike = maxStrike;
            }
            maxStrike = 1;
        }
    }
    printf("%lld", MAX(lastStrike, maxStrike));
}