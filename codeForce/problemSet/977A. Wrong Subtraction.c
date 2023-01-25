/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-25 13:04:29
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/977/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long number;
    int steps;
    scanf("%lld %d", &number, &steps);

    while (steps--)
    {
        if (number % 10 == 0)
        {
            number /= 10;
        }
        else
        {
            number--;
        }
    }
    printf("%d", number);
}