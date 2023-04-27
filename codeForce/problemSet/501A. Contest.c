/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-27 14:16:36
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/501/A
 * @ tags:  math - implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    long long a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    long long MishaScore = MAX((3 * a) / 10, a - (a / 250 * c));
    long long VasyaScore = MAX((3 * b) / 10, b - (b / 250 * d));

    if (MishaScore > VasyaScore)
    {
        printf("Misha");
    }
    else if (VasyaScore > MishaScore)
    {
        printf("Vasya");
    }
    else
    {
        printf("Tie");
    }
}