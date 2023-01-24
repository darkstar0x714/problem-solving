/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-24 06:27:05
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/50/A
 * @ tags: implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int M, N;
    int max_dominoes;

    scanf("%d %d", &M, &N);

    printf("%d", (M * N) / 2);
    return 0;
}