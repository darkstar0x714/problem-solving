/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-12 19:00:54
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1551/A
 * @ tags:  math - greedy
 * @ Problem Level:  *800
 */
#include <stdio.h>

int main()

{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        long long price, ones = 0, twos = 0, base = 0;

        scanf("%lld", &price);

        base = price / 3;
        ones = twos = base;
        if (price % 3 == 1)
        {
            ones++;
        }
        if (price % 3 == 2)
        {
            twos++;
        }
        printf("%lld %lld\n", ones, twos);
    }
}

/*********************time limit***************
#include <stdio.h>

int main()
{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        long long price, ones = 0, twos = 0;

        scanf("%lld", &price);
        while (price >= 3)
        {
            ones++;
            twos++;
            price -= 3;
        }
        if (price == 1)
            ones++;
        else if (price == 2)
            twos++;
        printf("%lld %lld\n", ones, twos);
    }
}
*/