/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-10 14:05:39
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1722/b
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        int stringLong;
        char input, firstString[101] = {0}, secondString[101] = {0};

        scanf("%d%s%s", &stringLong, firstString, secondString);

        for (int i = 0; i < stringLong; i++)
        {
            if (firstString[i] == 'G')
                firstString[i] = 'B';
            if (secondString[i] == 'G')
                secondString[i] = 'B';
        }

        if (strcmp(firstString, secondString) == 0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}