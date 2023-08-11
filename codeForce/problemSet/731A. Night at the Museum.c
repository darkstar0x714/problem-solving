
/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-09 13:31:11
 * @ Known as: DarkStar0x714
 * @ link: https://codeforces.com/contest/731/problem/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    char word[101] = {0}, a = 97, z = 122, currentChar, nextChar;
    int rotNumber = 0;

    scanf("%s", &word);
    currentChar = 'a';
    nextChar = word[0];
    rotNumber = MIN(abs(currentChar - nextChar), (26 - abs(currentChar - nextChar)));

    for (int i = 0; i < 101; i++)
    {
        if (word[i] != 0 && word[i + 1] != 0)
        {
            currentChar = word[i];
            nextChar = word[i + 1];
            rotNumber = rotNumber + MIN(abs(currentChar - nextChar), (26 - abs(currentChar - nextChar)));
        }
    }

    printf("%d", rotNumber);
}
