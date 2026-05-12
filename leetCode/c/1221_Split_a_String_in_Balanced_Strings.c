/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-12 20:49:38
 *@link:  https://leetcode.com/problems/split-a-string-in-balanced-strings
 */

int balancedStringSplit(char *s)
{

    int index = 0;
    int answer = 0;
    int balanceVar = 0;

    while (s[index] != '\0')
    {
        if (s[index] == 'R')
        {
            balanceVar++;
        }
        else if (s[index] == 'L')
        {
            balanceVar--;
        }

        if (balanceVar == 0)
        {
            answer++;
        }
        index++;
    }

    return answer;
}