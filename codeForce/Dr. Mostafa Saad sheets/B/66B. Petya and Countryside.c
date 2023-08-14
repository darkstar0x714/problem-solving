/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-12 20:22:56
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/66/problem/B
 * @ tags:  implementation - brute force
 * @ Problem Level:  *1100
 */

#include <stdio.h>

int main()
{
    int counter = 0, numberOfLands, maxAns = 0, lands[1001] = {0}, ans = 1;

    scanf("%d", &numberOfLands);

    for (int i = 0; i < numberOfLands; i++)
    {
        scanf("%d", &lands[i]);
    }

    for (int i = 0; i < numberOfLands; i++)
    {
        ans = 1;
        for (int j = i; j > 0; j--)
        {
            if (lands[j] >= lands[j - 1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }

        for (int j = i; j < numberOfLands - 1; j++)
        {
            if (lands[j] >= lands[j + 1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        if (maxAns < ans)
        {
            maxAns = ans;
        }
    }

    printf("%d", maxAns);
}