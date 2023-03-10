/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-10 22:47:55
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/766/problem/A
 * @ tags:  constructive algorithms - strings
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100001] = {0}, str2[100001] = {0};
    long long strLen1 = 0, strLen2 = 0;

    scanf("%s %s", str1, str2);

    strLen1 = strlen(str1);
    strLen2 = strlen(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("%d", -1);
    }
    else
    {
        (strLen1 >= strLen2) ? printf("%d", strLen1) : printf("%d", strLen2);
    }
}
