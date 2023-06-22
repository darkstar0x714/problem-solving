/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-22 09:44:19
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/954/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int n, i, c;
    scanf("%d", &n);
    c = 0;
    char s[101] = {0};
    scanf("%s", s);
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            c++;
            i++;
        }
    }
    printf("%d\n", n - c);
    return 0;
}