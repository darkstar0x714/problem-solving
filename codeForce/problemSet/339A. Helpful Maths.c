/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-19 11:08:21
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/339/problem/A
 * @ tags:  greedy - strings - implementation - sorting
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[100];
    int one = 0, two = 0, three = 0, stringLen, endNumberPosition;
    scanf("%s", inputString);
    stringLen = strlen(inputString);
    for (int i = 0; i < stringLen; i = i + 2)
    {
        if (inputString[i] == '1')
            one++;
        else if (inputString[i] == '2')
            two++;
        else if (inputString[i] == '3')
            three++;
    }
    for (int i = 0; i < (one * 2) + 1; i += 2)
    {
        inputString[i] = '1';
        endNumberPosition = i;
    }
    for (int i = endNumberPosition; i < ((one + two) * 2); i += 2)
    {
        inputString[i] = '2';
        endNumberPosition = i;
    }
    while (three != 0)
    {
        inputString[stringLen - 1] = '3';
        stringLen = stringLen - 2;
        three--;
    }

    printf("%s", inputString);

    return 0;
}