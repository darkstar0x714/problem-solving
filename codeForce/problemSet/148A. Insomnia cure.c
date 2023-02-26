/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-26 21:41:31
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/148/A
 * @ tags:  implementation - constructive algorithm - math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long array[100000] = {0}, k, l, m, n, d, counter = 0;

    scanf("%lld%lld%lld%lld%lld", &k, &l, &m, &n, &d);

    for (long long i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            array[i] = 1;
        }
    }

    for (long long i = 1; i <= d; i++)
    {
        if (array[i] == 1)
        {
            counter++;
        }
    }
    printf("%lld", counter);
}