/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-22 21:04:28
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1220/A
 * @ tags:  implementation - strings - sorting
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int strlen, zeros = 0, ones = 0;
    char cards[100001];

    scanf("%d", &strlen);
    scanf("%s", cards);

    for (int i = 0; i < strlen; i++)
    {
        if (cards[i] == 'z')
        {
            zeros++;
        }
        else if (cards[i] == 'n')
        {
            ones++;
        }
    }

    while (ones > 0)
    {
        printf("1 ");
        ones--;
    }
    while (zeros > 0)
    {
        printf("0 ");
        zeros--;
    }
}