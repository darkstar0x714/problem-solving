/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-18 15:26:38
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/281/a || https://codeforces.com/contest/281/problem/A
 * @ tags:  strings - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char string[10000];
    gets(string);
    if (string[0] >= 97)
    {
        string[0] = string[0] - 32;
    }
    printf("%s", string);
}