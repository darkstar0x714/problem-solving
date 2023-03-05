/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-03 07:13:48
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/208/A
 * @ tags:  strings
 * @ Problem Level:  *900
 */

#include <stdio.h>

int main()
{
    char inputString[201] = {0}, songWords[201] = {0}, WUBFlag = 0;
    int index = 0, i = 0;

    scanf("%s", inputString);

    for (i; inputString[i] != 0; i++)
    {
        if (inputString[i] == 'W' && inputString[i + 1] == 'U' && inputString[i + 2] == 'B')
        {
            inputString[i] = '0';
            inputString[i + 1] = '0';
            inputString[i + 2] = '0';
            if (WUBFlag == 0)
            {
                WUBFlag = 1;
                songWords[index] = 32;
                index++;
            }
        }
        else
        {
            if (inputString[i] != '0')
            {
                WUBFlag = 0;
                songWords[index] = inputString[i];
                index++;
            }
        }
    }

    printf("%s", (songWords[0] == 32) ? &songWords[1] : songWords);
}