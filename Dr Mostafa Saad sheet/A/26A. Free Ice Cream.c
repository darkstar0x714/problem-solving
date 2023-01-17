/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-17 10:41:22
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/686/problem/A
 * @ tags:  constructive algorithms - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long numberOfPeopleInQueue, initialIceCream, currentIceCream = 0, reqIceCream = 0, distressKid = 0;
    char sign;

    scanf("%lld %lld", &numberOfPeopleInQueue, &initialIceCream);
    currentIceCream = initialIceCream;
    for (long long i = 0; i < numberOfPeopleInQueue; i++)
    {
        scanf(" %c %lld", &sign, &reqIceCream);
        if (sign == '+')
        {
            currentIceCream = currentIceCream + reqIceCream;
        }
        else if ((sign == '-') && (reqIceCream > currentIceCream))
        {
            distressKid++;
        }
        else if ((sign == '-') && (reqIceCream <= currentIceCream))
        {
            currentIceCream = currentIceCream - reqIceCream;
        }
    }
    printf("%lld %lld", currentIceCream, distressKid);
}