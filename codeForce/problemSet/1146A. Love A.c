/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-08 14:58:42
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1146
 * @ tags:  strings - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main(void)
{
    char s[123];
    int x, a = 0, i, y = 0;
    scanf("%s", s);
    x = strlen(s);
    for (i = 0; i < x; i++)
    {
        if (s[i] == 97)
            a++;
        else
            y++;
    }
    if (a <= y)
        printf("%d", 2 * a - 1);
    else
        printf("%d", x);
    return 0;
}