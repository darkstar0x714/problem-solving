/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-23 13:26:45
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/765/B
 * @ tags:  greedy - implementation - strings
 * @ Problem Level:  *1100
 */

#include <stdio.h>

int main()
{
    char input[501] = {0}, freqArr[27] = {0}, ans = 0;

    scanf("%s", &input);

    for (int i = 0; input[i] != 0; i++)
    {
        freqArr[input[i] - 97] = 1;
        for (int j = 0; j <= input[i] - 97; j++)
        {
            if (freqArr[j] == 1)
            {
                ans = 1;
            }
            else
            {
                ans = 0;
                printf("NO");
                return 0;
            }
        }
    }
    if (ans)
    {
        printf("YES");
    }
}