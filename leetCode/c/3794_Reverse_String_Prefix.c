/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-11 03:53:22
 *@link:  https://leetcode.com/problems/reverse-string-prefix
 */

char *reversePrefix(char *s, int k)
{
    static char answer[101] = {0};
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        answer[i] = s[k - i - 1];
        index++;
    }
    while (s[index] != '\0')
    {
        answer[index] = s[index];
        index++;
    }
    answer[index] = '\0';
    return answer;
}