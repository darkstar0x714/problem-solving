/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-09 11:17:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1676/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int tsetsNumber;
    long long number, sumOf1stSet = 0, sumOf2ndSet = 0;

    scanf("%d", &tsetsNumber);

    while (tsetsNumber--)
    {
        scanf("%lld", &number);

        for (int i = 0; i < 3; i++)
        {
            sumOf1stSet += number % 10;
            number /= 10;
        }
        for (int i = 0; i < 3; i++)
        {
            sumOf2ndSet += number % 10;
            number /= 10;
        }

        printf("%s", (sumOf1stSet == sumOf2ndSet) ? "YES\n" : "NO\n");
        sumOf1stSet = sumOf2ndSet = 0;
    }
}