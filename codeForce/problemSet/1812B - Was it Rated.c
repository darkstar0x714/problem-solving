/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-02 19:09:04
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1812/problem/B
 * @ tags:  implementation - special problem - brute force
 * @ Problem Level:  *---
 */

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number == 15 || number == 20 || number == 21)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}