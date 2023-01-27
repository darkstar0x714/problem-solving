/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 09:06:38
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/58/A
 * @ tags:  strings - greedy
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    scanf("%s", word);

    int i = 0, j = 0;
    char hello[6] = {'h', 'e', 'l', 'l', 'o'};
    while (word[i] != '\0')
    {
        if (word[i] == hello[j])
            j++;
        i++;
    }
    if (j == 5)
        printf("YES");
    else
        printf("NO");
    return 0;
}