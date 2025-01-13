/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 12025-01-13 04:29:45
 *@link:  https://leetcode.com/problems/score-of-a-string/
 */

int scoreOfString(char *s)
{
    int index = 1;
    int solution = 0;

    while (s[index] != 0)
    {
        solution += abs(s[index - 1] - s[index]);
        index++;
    }
    return solution;
}