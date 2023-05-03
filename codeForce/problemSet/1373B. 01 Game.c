/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-03 21:43:11
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1373/problem/B
 * @ tags:  games
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, tc, a;
    char str[1000];
    scanf("%d", &tc);
    getchar();
    while (tc--)
    {
        int zero = 0, one = 0;
        gets(str);
        a = strlen(str);
        for (i = 0; i < a; i++)
        {
            if (str[i] == '0')
                zero++;
            else
                one++;
        }
        if (zero <= one)
        {
            if ((zero % 2 == 0))
            {
                printf("NET\n");
            }
            else
                printf("DA\n");
        }
        else
        {
            if ((one % 2 == 0))
            {
                printf("NET\n");
            }
            else
                printf("DA\n");
        }
    }
}