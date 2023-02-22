/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-19 21:29:18
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1328/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long a, b, counter = 0, numberOfTestes;

    scanf("%lld", &numberOfTestes);

    while (numberOfTestes--)
    {
        counter = 0;
        scanf("%lld %lld", &a, &b);

        if (a < b)
        {
            counter = b - a;
            printf("%lld\n", counter);
        }
        else if (a > b)
        {
            if (a % b != 0)
            {
                printf("%lld\n", b - (a % b)); // جبتها بالملاحظة كدا
            }
            else
                printf("%lld\n", counter);
        }
        else if (a == b)
            printf("%lld\n", counter);
    }
}