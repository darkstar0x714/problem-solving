/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-16 22:42:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1537/problem/A
 * @ tags:  math - greedy
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTests, arrLen, arr[1001] = {0};

    long long sum;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        sum = 0;
        scanf("%d", &arrLen);
        for (int i = 0; i < arrLen; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        if (sum == arrLen)
        {
            printf("%lld\n", 0);
        }
        else if (sum < arrLen)
        {
            printf("%lld\n", 1);
        }
        else
        {
            printf("%lld\n", sum - arrLen);
        }
    }
}