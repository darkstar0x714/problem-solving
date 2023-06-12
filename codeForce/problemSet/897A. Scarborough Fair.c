/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-12 13:57:14
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/897/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

#include <stdio.h>

int main()
{
    int n, m, i, l, r;
    char a, b, s[103];
    scanf("%i%i\n", &n, &m);
    scanf("%101s", s);
    while (m--)
    {
        scanf("%i%i %c %c", &l, &r, &a, &b);
        for (i = l - 1; i < r; i++)
            if (s[i] == a)
                s[i] = b;
    }
    printf("%s\n", s);
    return 0;
}