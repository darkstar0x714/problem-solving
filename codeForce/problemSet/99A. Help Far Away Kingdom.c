/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-19 08:47:09
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/99/problem/A
 * @ tags:  strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char text[1001] = {0};

    scanf("%s", &text);

    char *position_ptr = strchr(text, '.');

    int position = (position_ptr == NULL ? -1 : position_ptr - text);

    if (text[position - 1] == '9')
    {
        printf("GOTO Vasilisa.");
    }

    else
    {
        if (text[position + 1] >= '5')
        {
            text[position - 1] += 1;
            text[position] = 0;
        }
        else
        {
            text[position] = 0;
        }
        printf("%s", text);
    }
}