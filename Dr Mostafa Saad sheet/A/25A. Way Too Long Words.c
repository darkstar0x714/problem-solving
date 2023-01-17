/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-16 17:08:30
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/71/problem/A
 * @ tags:  strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    char string[101] = {0};
    int stringCount, counter = 0;
    scanf("%d", &stringCount);
    for (int i = 0; i < stringCount; i++)
    {
        scanf("%s", &string);
        for (int j = 0; j < 101; j++)
        {
            if (string[j] != 0)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        if (counter > 10)
        {
            printf("%c%d%c\n", string[0], counter - 2, string[counter - 1]);
        }
        else
        {
            printf("%s\n", string);
        }
        counter = 0;
    }
}