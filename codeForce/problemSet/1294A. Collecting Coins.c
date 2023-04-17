/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-15 21:42:26
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1294/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <math.h>

#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        long long a, b, c, n, max;

        scanf("%lld%lld%lld%lld", &a, &b, &c, &n);

        max = MAX(MAX(a, b), c);

        if (a == b && b == c)
        {
            if (n % 3 == 0)
            {
                printf("YES\n");
                continue;
            }
            else
            {
                printf("NO\n");
                continue;
            }
        }
        else if (max == a)
        {
            n = n - (a - b);
            n = n - (a - c);
        }
        else if (max == b)
        {
            n = n - (b - a);
            n = n - (b - c);
        }
        else if (max == c)
        {
            n = n - (c - a);
            n = n - (c - b);
        }

        if (n >= 0)
        {
            if (n % 3 == 0)
            {
                printf("YES\n");
                continue;
            }
            else
            {
                printf("NO\n");
                continue;
            }
        }
        else
        {
            printf("NO\n");
            continue;
        }
    }
}