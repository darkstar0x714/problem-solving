/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-05 22:34:20
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1136/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    long long pages[101] = {0}, markedPage;
    int numberOfChapters;
    long long nothing;
    scanf("%d", &numberOfChapters);
    for (int i = 0; i < numberOfChapters; i++)
    {
        scanf("%lld%lld", &nothing, &pages[i]);
    }

    scanf("%lld", &markedPage);

    for (int i = 0; i < numberOfChapters; i++)
    {
        if (markedPage <= pages[i])
        {
            printf("%d", numberOfChapters - i);
            break;
        }
    }
}