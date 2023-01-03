/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-03 10:23:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/59/problem/A
 * @ tags: strings - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int counter = 0, smallCount = 0, capitalCount = 0;
    char inputWord[101] = {0}, outputWord[101] = {0};
    scanf("%s", &inputWord);
    while (inputWord[counter] != 0)
    {
        if (inputWord[counter] >= 97 && inputWord[counter] <= 122)
        {
            smallCount++;
        }
        else
        {
            capitalCount++;
        }
        counter++;
    }
    if (smallCount >= capitalCount)
    {
        counter = 0;
        while (inputWord[counter] != 0)
        {
            outputWord[counter] = tolower(inputWord[counter]);
            counter++;
        }
    }
    else if (smallCount < capitalCount)
    {
        counter = 0;
        while (inputWord[counter] != 0)
        {
            outputWord[counter] = toupper(inputWord[counter]);
            counter++;
        }
    }
    printf("%s", outputWord);
}