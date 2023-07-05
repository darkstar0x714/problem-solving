/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-05 21:58:31
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/742/A
 * @ tags:  math - implementation - number theory
 * @ Problem Level:  *1000
 * @ hint link : https://www.youtube.com/watch?v=cQm__9qnXIw
 */

#include <stdio.h>
#include <math.h>

int main()
{
    long long power, reminder, ans;

    scanf("%lld", &power);
    if (power == 0)
    {
        printf("%lld", 1);
        return 0;
    }
    reminder = power % 4;

    ans = pow(8, reminder);

    if (ans == 1)
    {
        printf("%lld", 6);
        return 0;
    }
    else
    {
        ans = ans % 10;

        printf("%lld", ans);
    }
}