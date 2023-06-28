/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-28 20:50:57
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1759/problem/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char arrayOfMaxRespond[] = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int numberOfTestCases;

    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        char arrayOfRespond[52] = {0};

        scanf("%s", arrayOfRespond);

        if (strstr(arrayOfMaxRespond, arrayOfRespond) != NULL)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}