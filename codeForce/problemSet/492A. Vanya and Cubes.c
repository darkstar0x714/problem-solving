/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-09 20:39:32
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/492/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int numberOfBlockPerLevel(int floor)
{
    int numberOfBlock = 0;
    for (int i = 1; i <= floor; i++)
    {
        numberOfBlock += i;
    }
    return numberOfBlock;
}

int main()
{
    int numberOfBlocks, floors = 0;

    scanf("%d", &numberOfBlocks);

    int remindBlocks = numberOfBlocks;
    int lastRemindBlocks = 0;

    for (int i = 1; remindBlocks >= 0; i++)
    {
        lastRemindBlocks = numberOfBlockPerLevel(i);
        if (remindBlocks < lastRemindBlocks)
        {
            break;
        }
        remindBlocks -= lastRemindBlocks;
        floors++;
    }

    printf("%d", floors);
}
