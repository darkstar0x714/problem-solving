/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-31 23:00:22
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/230/A
 * @ tags:  greedy - sorting
 * @ Problem Level:  *1000
 */

#include <stdio.h>

struct dragon
{
    int dragonPower;
    int dragonReward;
};

void bsortAcen(struct dragon list[], int totalLen)
{
    int i, j;
    struct dragon temp;

    for (i = 0; i < totalLen - 1; i++)
    {
        for (j = 0; j < (totalLen - 1 - i); j++)
        {
            if (list[j].dragonPower > list[j + 1].dragonPower)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main()
{

    struct dragon arr[1002];
    int kiritoPower, numberOfDragon;

    scanf("%d%d", &kiritoPower, &numberOfDragon);

    for (int i = 0; i < numberOfDragon; i++)
    {
        scanf("%d", &arr[i].dragonPower);
        scanf("%d", &arr[i].dragonReward);
    }
    bsortAcen(arr, numberOfDragon);
    for (int i = 0; i < numberOfDragon; i++)
    {
        if (kiritoPower > arr[i].dragonPower)
        {
            kiritoPower += arr[i].dragonReward;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}