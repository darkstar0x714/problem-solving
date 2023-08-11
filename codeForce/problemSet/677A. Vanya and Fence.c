/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2022-12-30 15:36:56
 * @ Known as: DarkStar0x714
 * @ link: https://codeforces.com/contest/677/problem/A
 */

#include <stdio.h>

int main()
{
    int numberOfFriends, heightOfTheFence, minimumPossibleValidWidth = 0, heightOfPerson = 0;
    scanf("%d %d", &numberOfFriends, &heightOfTheFence);
    for (int i = 0; i < numberOfFriends; i++)
    {
        scanf("%d", &heightOfPerson);
        if (heightOfPerson > heightOfTheFence)
        {
            minimumPossibleValidWidth = minimumPossibleValidWidth + 2;
        }
        else
        {
            minimumPossibleValidWidth++;
        }
    }
    printf("%d", minimumPossibleValidWidth);
    return 0;
}