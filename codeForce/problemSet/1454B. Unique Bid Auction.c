/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-23 15:50:17
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1454/problem/B
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{

    int numberOfTestCases, numberOfPlayers;

    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        int frequancyArray[200009] = {0};
        int playerId[200009] = {0};
        int i;
        scanf("%d", &numberOfPlayers);

        for (i = 1; i <= numberOfPlayers; i++)
        {
            int cardValue;
            scanf("%d", &cardValue);
            frequancyArray[cardValue]++;
            playerId[cardValue] = i;
        }

        for (i = 1; i <= numberOfPlayers; i++)
        {
            if (frequancyArray[i] == 1)
            {
                printf("%d\n", playerId[i]);
                break;
            }
        }
        if (i > numberOfPlayers)
        {
            printf("%d\n", -1);
        }
    }
}