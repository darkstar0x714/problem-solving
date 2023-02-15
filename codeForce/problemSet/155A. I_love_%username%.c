/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-13 21:45:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/155/problem/A
 * @ tags:  brute force - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfContests, arr[10000] = {0}, min, max, amazing = 0;

    scanf("%d", &numberOfContests);

    for (int i = 0; i < numberOfContests; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 0; i < numberOfContests; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            amazing++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            amazing++;
        }
    }
    printf("%d", amazing);
}