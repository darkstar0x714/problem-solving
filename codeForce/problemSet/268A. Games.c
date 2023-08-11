/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-21 12:14:59
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/268/problem/A
 * @ tags:  brute force
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTeams, hostColor[101] = {0}, guestColor[101] = {0}, counter = 0;

    scanf("%d", &numberOfTeams);

    for (int i = 0; i < numberOfTeams; i++)
    {
        scanf("%d %d", &hostColor[i], &guestColor[i]);
    }

    for (int i = 0; i < numberOfTeams; i++)
    {
        for (int j = 0; j < numberOfTeams; j++)
        {
            if (guestColor[i] == hostColor[j])
            {
                counter++;
            }
        }
    }
    printf("%d", counter);
}