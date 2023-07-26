/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-26 22:12:57
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/219/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int k, temp = 0;
    int freqArr[27] = {0};
    char string[1001] = {0}, ans[1001] = {0};

    scanf("%d", &k);
    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++)
    {
        freqArr[string[i] - 'a']++;
    }

    for (int i = 0; i < 27; i++)
    {
        temp = freqArr[i];
        if (temp % k != 0)
        {
            printf("-1");
            return 0;
        }
        else
        {
            int unit = temp / k;

            for (int j = 0; j < unit; j++)
            {
                char x[2] = {0};
                x[0] = i + 'a';
                strcat(ans, x);
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%s", ans);
    }
}