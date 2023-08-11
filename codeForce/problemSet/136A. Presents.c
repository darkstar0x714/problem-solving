/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 16:45:48
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/136/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numbers[101] = {0}, numberOfFriends, outputArr[101] = {0};

    scanf("%d", &numberOfFriends);
    for (int i = 1; i <= numberOfFriends; i++)
    {
        int value;
        scanf("%d", &value);
        outputArr[value] = i;
    }

    for (int i = 1; i <= numberOfFriends; i++)
    {
        printf("%d ", outputArr[i]);
    }
}
