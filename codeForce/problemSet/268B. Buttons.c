/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-22 21:13:25
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/268/B
 * @ tags:  implementation - math
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int main()
{
    int numberOfButtons = 0;

    scanf("%d", &numberOfButtons);
    long long ans = numberOfButtons;
    for (int i = 1; i < numberOfButtons; i++)
    {
        ans += i * (numberOfButtons - i);
    }

    printf("%lld", ans);
}