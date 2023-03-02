/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-02 11:15:14
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/510/A
 * @ tags:  implementation - pattern
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfRows, numberOfCol, direction = 0;

    scanf("%d %d", &numberOfRows, &numberOfCol);

    for (int i = 1; i <= numberOfRows; i++)
    {
        if (i % 2 != 0)
        {
            for (int i = 0; i < numberOfCol; i++)
            {
                printf("#");
            }
            printf("\n");
        }
        if (i % 2 == 0)
        {
            if (direction == 0)
            {
                direction = 1;
                for (int i = 0; i < numberOfCol - 1; i++)
                {
                    printf(".");
                }
                printf("#");
                printf("\n");
            }
            else
            {
                direction = 0;
                printf("#");
                for (int i = 0; i < numberOfCol - 1; i++)
                {
                    printf(".");
                }
                printf("\n");
            }
        }
    }
}