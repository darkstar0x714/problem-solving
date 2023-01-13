/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-13 18:43+1:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/5/a || https://codeforces.com/contest/5/problem/A
 * @ tags: strings - implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int bytes = 0, personsOnChat = 0;
    char string[200];
    while (fgets(string, 200, stdin) != NULL)
    {
        if (string[0] == '-')
        {
            personsOnChat--;
        }
        if (string[0] == '+')
        {
            personsOnChat++;
        }
        else
        {
            char *massage = strchr(string, ':');
            if (massage != NULL)
            {
                bytes = bytes + (personsOnChat * (strlen(massage) - 2));
            }
        }
    }
    printf("%d", bytes);
}