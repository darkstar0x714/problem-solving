/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-05 20:47:08
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/486/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <math.h>
// TIME LIMIT ON TEST 3
long long f(long long n)
{
    long long result = 0;
    for (long long i = 1; i <= n; i++)
    {
        result = result + pow(-1, i) * i;
    }
    return result;
}

int main()
{
    long long input;
    scanf("%lld", &input);
    (input % 2 == 0) ? printf("%lld", input / 2)
                     : printf("%lld", -1 * (input + 1) / 2);
}