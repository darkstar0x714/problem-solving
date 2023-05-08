/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-08 22:20:13
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/49/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    int l = strlen(str);
    l = l - 2;
    while (1)
    {
        if (isalpha(str[l]))
        {
            if (str[l] == 'A' || str[l] == 'E' || str[l] == 'I' || str[l] == 'O' || str[l] == 'U' || str[l] == 'Y' || str[l] == 'a' || str[l] == 'e' || str[l] == 'i' || str[l] == 'o' || str[l] == 'u' || str[l] == 'y')
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }
        }
        else
            l--;
    }
}