/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-02 22:20:25
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/158/B
 * @ tags:  *special problem - greedy - implementation
 * @ Problem Level:  *1100
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int numberOfGroups, group1 = 0, group2 = 0, group3 = 0, group4 = 0, numberOfTaxis = 0;

    scanf("%d", &numberOfGroups);

    for (int i = 0; i < numberOfGroups; i++)
    {
        int temp;
        scanf("%d", &temp);
        switch (temp)
        {
        case 1:
            group1++;
            break;
        case 2:
            group2++;
            break;
        case 3:
            group3++;
            break;
        case 4:
            group4++;
            break;
        default:
            break;
        }
    }
    numberOfTaxis = group4;
    group4 = 0;
    while (group1 != 0 || group2 != 0 || group3 != 0)
    {
        if (group3 >= group1)
        {
            numberOfTaxis += group3;
            group1 = 0;
            group3 = 0;
            numberOfTaxis += ceil(group2 / 2.0);
            group2 = 0;
        }
        else
        {
            numberOfTaxis += group3;
            group1 = group1 - group3;
            group3 = 0;
            if (group2 % 2 == 0 && group2 != 0)
            {
                numberOfTaxis += group2 / 2;
                group2 = 0;
                numberOfTaxis += ceil(group1 / 4.0);
                group1 = 0;
            }
            else
            {
                group1 = ceil(group1 / 2.0);
                numberOfTaxis += ceil((group1 + group2) / 2.0);
                group1 = 0;
                group2 = 0;
            }
        }
    }
    printf("%d", numberOfTaxis);
}