/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-05 21:04:02
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/750/A
 * @ tags:  implementation - binary search - brute force - math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfQuestions, travelTime;

    scanf("%d%d", &numberOfQuestions, &travelTime);

    int remainTime = (4 * 60) - travelTime;

    int solvedQu = 0;
    for (int i = 1; i <= numberOfQuestions; i++)
    {
        int timeRequire = 5 * i;
        if (remainTime - timeRequire >= 0)
        {
            remainTime -= timeRequire;
            solvedQu++;
        }
        else
        {
            break;
        }
    }
    printf("%d", solvedQu);
}