/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-04 14:56:02
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1585/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTestCases, numberOfDays;

    scanf("%d", &numberOfTestCases);
    while (numberOfTestCases--)
    {
        scanf("%d", &numberOfDays);
        int array[101] = {0};
        int plantTall = 1;
        int deathFlag = 0;
        for (int i = 0; i < numberOfDays; i++)
        {
            scanf("%d", &array[i]);
        }

        for (int i = 0; i < numberOfDays; i++)
        {
            if (array[i] == 1 && array[i - 1] == 1 && i != 0)
            {
                plantTall += 5;
                deathFlag = 0;
            }
            else if (array[i] == 1)
            {
                plantTall++;
                deathFlag = 0;
            }
            else if (array[i] == 0)
            {
                deathFlag++;
            }
            if (deathFlag == 2)
            {
                break;
            }
        }
        if (deathFlag == 2)
        {
            printf("%d\n", -1);
        }
        else
        {
            printf("%d\n", plantTall);
        }
    }
}