/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-25 11:39:23
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/43/B
 * @ tags:  implementation - strings
 * @ Problem Level:  *1100
 */

#include <stdio.h>
#include <string.h>

void removeSpaces(int stringLen, char rawString[], char targetString[])
{
    char cToStr[2];
    cToStr[1] = '\0';
    for (int i = 0; i < stringLen; i++)
    {
        cToStr[0] = rawString[i];
        if (rawString[i] != 32)
        {
            strcat(targetString, cToStr);
        }
    }
}

void bubbleSort(char arr[], int sizeOfArr) // ascending
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                char tempValForSwip = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwip;
            }
        }
    }
}

int main()
{
    char rawNewspaperHead[201] = {0}, rawLetter[201] = {0};
    char sortedNewspaperHead[201] = {0}, sortedLetter[201] = {0};
    int NewspaperHeadLen = 0, LetterLen = 0, counter = 0;

    gets(rawNewspaperHead);
    gets(rawLetter);

    NewspaperHeadLen = strlen(rawNewspaperHead);
    LetterLen = strlen(rawLetter);

    removeSpaces(NewspaperHeadLen, rawNewspaperHead, sortedNewspaperHead);
    removeSpaces(LetterLen, rawLetter, sortedLetter);
    NewspaperHeadLen = strlen(sortedNewspaperHead);
    LetterLen = strlen(sortedLetter);

    bubbleSort(sortedNewspaperHead, NewspaperHeadLen);
    bubbleSort(sortedLetter, LetterLen);

    for (int i = 0; i < LetterLen; i++)
    {
        for (int j = 0; j < NewspaperHeadLen; j++)
        {
            if (sortedLetter[i] == sortedNewspaperHead[j])
            {
                sortedNewspaperHead[j] = '!';
                counter++;
                break;
            }
        }
    }

    if (counter == LetterLen)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}