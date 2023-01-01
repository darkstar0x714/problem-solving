/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-01 05:19:32
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/231/problem/A
 * @ tags: implementation -  brute force - greedy
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfProblem, decision = 0, Petya, Tonya, Vasya, numberOfProblemCanAnswared = 0;

    scanf("%d", &numberOfProblem);
    for (int i = 0; i < numberOfProblem; i++)
    {
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);
        decision = Petya + Vasya + Tonya;
        if (decision >= 2)
        {
            numberOfProblemCanAnswared++;
        }
    }
    printf("%d", numberOfProblemCanAnswared);
    return 0;
}