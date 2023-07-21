/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-21 20:17:21
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/237/A
 * @ tags:  implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct timeOfArrive
{
    int hour;
    int min;
};

struct timeOfArrive str[100001];

int main()
{
    int array[24][61] = {0};
    long long numberOfCustomer = 0;
    long long max = 0;
    scanf("%lld", &numberOfCustomer);

    for (long long i = 0; i < numberOfCustomer; i++)
    {
        scanf("%d", &str[i].hour);
        scanf("%d", &str[i].min);
        array[str[i].hour][str[i].min]++;
        if (array[str[i].hour][str[i].min] > max)
        {
            max = array[str[i].hour][str[i].min];
        }
    }

    printf("%lld", max);
}