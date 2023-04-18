/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-18 18:10:38
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1669/problem/B
 * @ tags:  sorting - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTestCases;

    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        int arrayLen, array[200001] = {0}, element, x = -1;

        scanf("%d", &arrayLen);

        for (int i = 0; i < arrayLen; i++)
        {
            scanf("%d", &element);

            array[element]++;

            if (array[element] > 2)
            {
                x = element;
            }
        }
        printf("%d\n", x);
    }
}