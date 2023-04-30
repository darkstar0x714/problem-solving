/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-30 13:36:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/255/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */
#include <stdio.h>

int main()
{
    int n, a, k[3] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        k[i % 3] += a;
    }
    if (k[0] > k[1] && k[0] > k[2])
        printf("chest");
    else if (k[1] > k[0] && k[1] > k[2])
        printf("biceps");
    else
        printf("back");

    return 0;
}