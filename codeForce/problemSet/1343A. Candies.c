/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-04 17:23:33
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1343/problem/A
 * @ tags:  brute force - math
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <math.h>

int main()
{
    long long numberOfTestCases, summations;

    scanf("%lld", &numberOfTestCases);
    while (numberOfTestCases--)
    {
        int n, summations = 1;
        scanf("%d", &n);
        for (int i = 2; i <= n; i++)
        {
            summations += pow(2, i - 1);

            if (n % summations == 0)
            {
                printf("%d\n", n / summations);
                break;
            }
        }
    }
}