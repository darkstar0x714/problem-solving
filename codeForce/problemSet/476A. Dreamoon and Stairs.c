/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-18 11:15:41
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/476/A
 * @ tags:  math - implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>

#define ceilDiv(numerator, denominator) ((numerator) / (denominator) + ((numerator) % (denominator) != 0))

int main()
{
    long long numberOfStairs, multiplier, numberOfSteps = 0;

    scanf("%lld%lld", &numberOfStairs, &multiplier);

    if (multiplier > numberOfStairs)
    {
        printf("%d", -1);
    }
    else
    {
        numberOfSteps = ceilDiv(numberOfStairs, 2);

        while (numberOfSteps % multiplier != 0)
        {
            numberOfSteps++;
        }

        printf("%lld", numberOfSteps);
    }
}