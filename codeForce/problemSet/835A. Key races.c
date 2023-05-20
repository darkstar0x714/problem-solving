/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-20 18:11:22
 * @ Known as: DarkStar0x714
 * @ link: https://codeforces.com/problemset/problem/835/A
 * @ tags: math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int s, v1, v2, t1, t2;
    scanf("%d%d%d%d%d", &s, &v1, &v2, &t1, &t2);
    int p1 = 2 * t1 + s * v1;
    int p2 = 2 * t2 + s * v2;

    if (p1 < p2)
    {
        printf("First");
    }
    else if (p2 < p1)
    {
        printf("Second");
    }
    else
    {
        printf("Friendship");
    }
}