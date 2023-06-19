/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-19 10:09:24
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1367/problem/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    char s[105];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        for (i = 0; i < strlen(s); i++)
        {
            if (i % 2 != 0 || i == 0)
                printf("%c", s[i]);
        }
        printf("\n");
    }
}