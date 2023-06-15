/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-15 12:31:41
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/262/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int n, k, i, j, a, num = 0, sum = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; ++i)
    {
        char number[10];
        scanf("%s", &number);
        a = strlen(number);
        for (j = 0; j < a; ++j)
        {
            if (number[j] == '7' || number[j] == '4')
            {
                sum = sum + 1;
            }
        }
        if (sum <= k)
        {
            num = num + 1;
        }
        sum = 0;
    }
    printf("%d", num);
}