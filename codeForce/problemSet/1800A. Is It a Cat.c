/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-16 21:55:05
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1800/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */
#include <string.h>
int main()
{
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int n, x = 0, i;
        scanf("%d", &n);
        char p[1000], q[1000], r[1000] = "meow";
        scanf("%s", &p);
        strlwr(p);
        for (i = 0; i < n; i++)
        {
            if (p[i + 1] != p[i])
                q[x++] = p[i];
        }
        q[x++] = '\0';
        if (strcmp(q, r) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}