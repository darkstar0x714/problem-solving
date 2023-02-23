/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-23 21:25:38
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/479/A
 * @ tags:  math - brute force
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    long long a, b, c, t1, t2, t3, t4;

    scanf("%lld %lld %lld", &a, &b, &c);

    t1 = a + b + c;
    t2 = a * b * c;
    t3 = a * (b + c);
    t4 = (a + b) * c;

    printf("%lld", MAX(MAX(t1, t2), MAX(t3, t4)));
}