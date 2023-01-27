/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 08:51:50
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/41/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char firstString[101] = {0}, secondString[101] = {0};
    int flag = 0;
    scanf("%s %s", firstString, secondString);
    int str = strlen(firstString);
    for (int i = 0; i < strlen(firstString); i++)
    {
        if (firstString[i] == secondString[strlen(firstString) - 1 - i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    (flag) ? printf("YES") : printf("NO");
    return 0;
}