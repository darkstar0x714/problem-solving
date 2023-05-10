/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-10 21:51:54
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1411/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int testNumber;

    scanf("%d", &testNumber);

    while (testNumber--)
    {
        char string[101] = {0};
        int stringlen;

        scanf("%d", &stringlen);

        scanf("%s", string);

        int count = 0;
        for (int j = stringlen - 1; j >= 0; j--)
        {
            if (string[j] == ')')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count > (stringlen - count))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}