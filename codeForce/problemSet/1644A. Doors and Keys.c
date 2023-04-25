/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-25 13:42:47
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1644/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfTests;
    int next = 0;
    char input[7] = {0};

    scanf("%d", &numberOfTests);

    for (int i = 0; i < numberOfTests; i++)
    {
        next = 0;
        scanf("%s", input);
        for (int i = 0; i < 6; i++)
        {
            if (input[i] == 'R' || input[i] == 'G' || input[i] == 'B')
            {
                for (int j = 0; j < i; j++)
                {
                    if (input[j] == (input[i] + 32))
                    {
                        next++;
                    }
                }
            }
        }
        if (next >= 3)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}