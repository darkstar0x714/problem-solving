/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-19 14:27:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1569/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTestCases, stringLen, flag = 0;

    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        scanf("%d", &stringLen);
        char string[51] = {0};
        scanf("%s", string);
        for (int i = 0; i < stringLen - 1; i++)
        {
            if (string[i] != string[i + 1])
            {
                printf("%d %d\n", i + 1, i + 2);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d %d\n", -1, -1);
        }
        else
            flag = 0;
    }
}