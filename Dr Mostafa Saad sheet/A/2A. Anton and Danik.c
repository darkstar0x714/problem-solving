/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2022-12-30 16:17:40
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/734/problem/A
 */
#include <stdio.h>

int main()
{
    long long matchs, A = 0, D = 0;
    char result[100000];
    scanf("%lld", &matchs);
    scanf("%s", &result);
    for (int i = 0; i < matchs; i++)
    {
        if (result[i] == 'A')
        {
            A++;
        }
        else if (result[i] == 'D')
        {
            D++;
        }
    }
    if (A > D)
    {
        printf("Anton");
    }
    else if (A < D)
    {
        printf("Danik");
    }

    else
    {
        printf("Friendship");
    }
}