/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-12 20:40:37
 *@link:  https://leetcode.com/problems/reverse-degree-of-a-string
 */

int reverseDegree(char *s)
{

    int answer = 0;
    int index = 0;
    while (s[index] != '\0')
    {
        answer = answer + ((('z' + 1) - s[index]) * (index + 1));
        index++;
    }
    return answer;
}