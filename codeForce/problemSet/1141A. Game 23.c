/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-07 12:23:24
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1141/A
 * @ tags:  math - implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int main(void)
{
    long long n, m, steps = 0;

    scanf("%lld%lld", &n, &m);
    if (m % n)
    {
        printf("-1");
    }
    else
    {
        m /= n;
        while (m % 2 == 0)
        {
            steps++;
            m /= 2;
        }
        while (m % 3 == 0)
        {
            steps++;
            m /= 3;
        }
        if (m == 1)
        {
            printf("%lld", steps);
        }
        else
        {
            printf("-1");
        }
    }
}