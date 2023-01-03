/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-02 10:38:10
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/112/problem/A
 * @ tags:  implementation - strings - compare
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char firstString[101] = {0}, secondString[101] = {0};
    int flag;

    scanf("%s %s", &firstString, &secondString);
    if (firstString == secondString)
    {
        flag = 0;
    }
    else
    {
        for (int i = 0; i < sizeof(firstString); i++)
        {
            if (firstString[i] != 0)
            {
                if (tolower(firstString[i]) == tolower(secondString[i]))
                {
                    flag = 0;
                }
                else if (tolower(firstString[i]) > tolower(secondString[i]))
                {
                    flag = 1;
                    break;
                }
                else if (tolower(firstString[i]) < tolower(secondString[i]))
                {
                    flag = -1;
                    break;
                }
            }
            else
                break;
        }
    }

    if (flag == 0)
    {
        printf("%d", 0);
    }
    else if (flag == -1)
    {
        printf("%d", -1);
    }
    else if (flag == 1)
    {
        printf("%d", 1);
    }
}