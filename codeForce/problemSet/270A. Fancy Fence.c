/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-02 21:22:39
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/270/A
 * @ tags:  math - implementation - geometry
 * @ Problem Level:  *1100
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        float angle;
        scanf("%f", &angle);

        if ((360.0 / (180 - angle)) == floor((360.0 / (180 - angle))))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}