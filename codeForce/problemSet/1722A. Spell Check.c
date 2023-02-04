/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-01 14:24:07
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1722/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfTestCases, numberOfChar;
    char str[10] = {0};

    scanf("%d", &numberOfTestCases);
    while (numberOfTestCases--)
    {
        scanf("%d", &numberOfChar);
        if (numberOfChar == 5)
        {
            scanf("%s", &str);
            if (strchr(str, 'T') && strchr(str, 'i') && strchr(str, 'm') && strchr(str, 'u') && strchr(str, 'r'))
                printf("YES\n");
            else
                printf("NO\n");
        }

        else
            printf("NO\n");
    }
}
