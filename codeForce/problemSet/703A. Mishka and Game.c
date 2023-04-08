/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-08 21:33:10
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/703/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfRounds, MishkaWins = 0, ChrisWins = 0;
    scanf("%d", &numberOfRounds);

    while (numberOfRounds--)
    {
        int MishkaScore, ChrisScore;
        scanf("%d%d", &MishkaScore, &ChrisScore);

        if (MishkaScore > ChrisScore)
            MishkaWins++;
        else if (MishkaScore < ChrisScore)
            ChrisWins++;
    }

    if (MishkaWins > ChrisWins)
        puts("Mishka");
    else if (MishkaWins < ChrisWins)
        puts("Chris");
    else
        puts("Friendship is magic!^^");

    return 0;
}