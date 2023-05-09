/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-09 22:05:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1130/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int d = 0, n = 0, half = 0, arr[101] = {0};

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        half = n / 2;
    }

    else
    {
        half = n / 2 + 1;
    }

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    int zero_count = 0, plus_count = 0, minus_count = 0;

    for (int j = 0; j < n; j++)
    {

        if (arr[j] == 0)
        {

            zero_count++;
        }
        else if (arr[j] > 0)
        {

            plus_count++;
        }
        else
        {

            minus_count++;
        }
    }

    if (plus_count >= half)
    {
        printf("1");
    }

    else if (minus_count >= half)
    {
        printf("-1");
    }

    else
    {
        printf("0");
    }

    return 0;
}
