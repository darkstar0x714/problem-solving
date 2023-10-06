#include <stdio.h>
#include <string.h>
#include <ctype.h>

int repeated_count(char str[], char word[])
{
    char temp[100];
    int x = 0, y = 0, z = 0;
    for (x = 0; x < strlen(str); x++)
    {
        while (x < strlen(str) && !isspace(str[x]) && isalnum(str[x]))
        {
            temp[y++] = str[x++];
        }
        if (y != 0)
        {
            temp[y] = '\0';
            if (strcmp(temp, word) == 0)
            {
                z++;
            }
            y = 0;
        }
    }
    return z;
}