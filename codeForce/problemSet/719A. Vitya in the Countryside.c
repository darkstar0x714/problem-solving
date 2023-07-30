/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-30 21:09:55
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/719/A
 * @ tags:  implementation
 * @ Problem Level:  *1100
 */

#include <stdio.h>

int main()
{
    int days[93] = {0}, numberOfDays;

    scanf("%d", &numberOfDays);
    for (int i = 0; i < numberOfDays; i++)
    {
        scanf("%d", &days[i]);
    }

    if (numberOfDays == 1)
    {
        if (days[0] == 0)
        {
            printf("UP");
        }
        else if (days[0] == 15)
        {
            printf("DOWN");
        }
        else
        {
            printf("-1");
        }
    }
    else
    {
        if (days[numberOfDays - 1] == 15)
        {
            printf("DOWN");
        }
        else if (days[numberOfDays - 1] == 0)
        {
            printf("UP");
        }
        else if (days[numberOfDays - 1] > days[numberOfDays - 2])
        {
            printf("UP");
        }
        else
        {
            printf("DOWN");
        }
    }
}