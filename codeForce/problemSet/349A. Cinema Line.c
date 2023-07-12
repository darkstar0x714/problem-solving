/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-12 21:43:06
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/349/A
 * @ tags:  implementation - greedy
 * @ Problem Level:  *1100
 */

#include <stdio.h>

int main()
{
    int numberOfPeopleInRaw, selled = 0, counter25 = 0, counter50 = 0;
    int row[100001] = {0};
    scanf("%d", &numberOfPeopleInRaw);

    for (int i = 0; i < numberOfPeopleInRaw; i++)
    {
        scanf("%d", &row[i]);
        if (row[i] == 25)
        {
            counter25++;
            selled++;
        }
        else if (row[i] == 50)
        {
            if (counter25)
            {
                counter25--;
                counter50++;
                selled++;
            }
        }
        else
        {
            if (counter50 && counter25)
            {
                counter25--;
                counter50--;
                selled++;
            }
            else if (counter25 >= 3)
            {
                counter25 -= 3;
                selled++;
            }
        }
    }
    if (selled == numberOfPeopleInRaw)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}