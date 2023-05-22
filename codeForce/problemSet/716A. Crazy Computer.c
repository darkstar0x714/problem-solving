/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-22 22:34:32
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/716/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

void main()
{
    long long numberOfWords, seconds, times[100001] = {0}, counter = 0;

    scanf("%lld%lld", &numberOfWords, &seconds);

    for (long long i = 0; i < numberOfWords; i++)
    {
        scanf("%lld", &times[i]);
    }

    for (long long i = 1; i <= numberOfWords; i++)
    {
        if ((times[i] - times[i - 1]) <= seconds)
        {
            counter++;
        }
        else
            counter = 0;
    }
    printf("%lld", counter);
}