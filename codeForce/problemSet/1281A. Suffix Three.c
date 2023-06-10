/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-10 11:54:34
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1281/A
 * @ tags:  implementation
 * @ Problem Level:  *
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int testCases;
    scanf("%d", &testCases);

    while (testCases--)
    {
        char array[1001] = {0};
        scanf("%s", array);
        int strLen = strlen(array);

        if (array[strLen - 1] == 'a')
        {
            printf("KOREAN\n");
        }
        else if (array[strLen - 1] == 'u')
        {
            printf("JAPANESE\n");
        }
        else if (array[strLen - 1] == 'o')
        {
            printf("FILIPINO\n");
        }
    }
}