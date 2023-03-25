/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-25 22:17:05
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1619/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int testCases, counter = 0;
    char string[101] = {0};
    scanf("%d", &testCases);

    while (testCases--)
    {
        scanf("%s", string);

        if (strlen(string) % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            for (int i = 0; i < strlen(string) / 2; i++)
            {
                if (string[i] == string[(strlen(string) / 2) + i])
                {
                    counter++;
                }
                else
                {
                    printf("NO\n");
                    break;
                }
            }
            if (counter == strlen(string) / 2)
            {
                printf("YES\n");
            }
            counter = 0;
        }
    }
}