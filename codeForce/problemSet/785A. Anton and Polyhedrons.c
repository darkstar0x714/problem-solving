/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-06 15:03:08
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/785/problem/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long numberOfShapes, numberOfFaces = 0;
    char shapeName[30] = {0};

    scanf("%lld", &numberOfShapes);

    for (long long i = 0; i < numberOfShapes; i++)
    {
        scanf("%s", &shapeName);
        if ('I' == shapeName[0])
        {
            numberOfFaces = numberOfFaces + 20;
        }
        else if ('D' == shapeName[0])
        {
            numberOfFaces = numberOfFaces + 12;
        }
        else if ('O' == shapeName[0])
        {
            numberOfFaces = numberOfFaces + 8;
        }
        else if ('C' == shapeName[0])
        {
            numberOfFaces = numberOfFaces + 6;
        }
        else
        {
            numberOfFaces = numberOfFaces + 4;
        }
    }
    printf("%lld", numberOfFaces);
}