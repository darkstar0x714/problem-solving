/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-21 21:52:39
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/131/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
    int s = 0, i;
    char word[100];

    scanf("%s", word);

    for (i = 1; word[i] != '\0'; i++)
    {
        if (islower(word[i]))
        {
            s = 1;
            break;
        }
    }
    if (s == 1)
        puts(word);
    else
    {
        if (islower(word[0]))
            putchar(toupper(word[0]));
        else
            putchar(tolower(word[0]));
        for (i = 1; word[i] != '\0'; i++)
            putchar(tolower(word[i]));
    }
    return 0;
}
