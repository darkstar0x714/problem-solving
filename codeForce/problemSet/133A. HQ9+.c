/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-11 20:52:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/133/A
 * @ tags:  implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char inputString[101] = {0};
    int flag = 0;
    scanf("%s", inputString);

    for (int i = 0; i < strlen(inputString); i++)
    {
        if (inputString[i] == 'H' || inputString[i] == 'Q' || inputString[i] == '9')
        {
            printf("YES");
            flag = 1;
            break;
        }
    }
    if (!flag)
        printf("NO");
}