/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-24 10:26:00
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/118/A
 * @ tags:  strings - implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I' || str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i')
        {
            // Delete vowels
            int j;
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
            len--;
            i--;
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32; // Convert to lowercase
            }
            printf(".");
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}