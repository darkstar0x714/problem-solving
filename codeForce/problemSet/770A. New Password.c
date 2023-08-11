/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-21 21:12:12
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/770/problem/A
 * @ tags: implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int lengthOfThePassword, distinctLetter, distinctLetterInPassword = 0, indexOfLetter = 0;
    char password[100];
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

    scanf("%d %d", &lengthOfThePassword, &distinctLetter);

    for (int i = 0; i < lengthOfThePassword; i++)
    {
        password[i] = letters[indexOfLetter];
        indexOfLetter++;
        distinctLetterInPassword++;
        if (distinctLetterInPassword == distinctLetter)
        {
            distinctLetterInPassword = 0;
            indexOfLetter = 0;
        }
    }
    for (int i = 0; i < lengthOfThePassword; i++)
    {
        printf("%c", password[i]);
    }
}