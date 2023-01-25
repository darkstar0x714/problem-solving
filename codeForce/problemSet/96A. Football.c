/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-25 12:34:08
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/96/A
 * @ tags:  strings - implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <string.h>
// must be continues
int main()
{
    char arr[101] = {'x'}, stringLen;
    int numberOfZeros = 0, numberOfOnes = 0, flag = 0;

    scanf("%s", arr);
    stringLen = strlen(arr);

    for (int i = 0; i < stringLen; i++)
    {
        if (arr[i] == '0')
        {
            numberOfZeros++;
            if (numberOfZeros >= 7)
            {
                flag = 1;
                break;
            }
            numberOfOnes = 0;
        }
        else
        {
            numberOfOnes++;
            if (numberOfOnes >= 7)
            {
                flag = 1;
                break;
            }
            numberOfZeros = 0;
        }
    }
    if (flag)

        printf("YES");

    else
        printf("NO");
}
/*
int main()
{
    char str[100];
    gets(str);
    if (strstr(str, "0000000") || strstr(str, "1111111"))
        printf("YES");
    else
        printf("NO");
    return 0;
}
*/
