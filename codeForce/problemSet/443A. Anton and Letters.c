/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-15 10:26:45
 * @ Known as: DarkStar0x714
 * @ link: https://codeforces.com/contest/443/problem/A
 * @ tags:  constructive algorithms - implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char arr[1001] = {0}, alphabet[123] = {0}, count = 0;
    gets(arr);
    for (int i = 0; i < 1001; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            alphabet[arr[i]] = 1;
        }
    }
    for (int i = 0; i < 123; i++)
    {
        if (alphabet[i] == 1)
        {
            count++;
        }
    }
    printf("%d", count);
}