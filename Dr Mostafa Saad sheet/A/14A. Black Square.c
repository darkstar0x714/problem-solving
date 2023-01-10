/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-10 10:10:36
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/431/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int a1, a2, a3, a4;
    int i1 = 0, i2 = 0, i3 = 0, i4 = 0;

    char string[100001] = {'$'};

    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    scanf("%s", &string);

    for (int i = 0; i < 100001; i++)
    {
        if (string[i] == 49)
        {
            i1++;
        }
        if (string[i] == 50)
        {
            i2++;
        }
        if (string[i] == 51)
        {
            i3++;
        }
        if (string[i] == 52)
        {
            i4++;
        }
    }
    printf("%d", (i1 * a1) + (i2 * a2) + (i3 * a3) + (i4 * a4));
}