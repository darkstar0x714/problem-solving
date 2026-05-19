/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-17 22:19:11
 *@link:  https://leetcode.com/problems/truncate-sentence
 */

char *truncateSentence(char *s, int k)
{

    static char answer[501] = {0};
    int spacesIncluded = 0;
    int index = 0;
    while (spacesIncluded < k && s[index] != '\0')
    {
        if (' ' == s[index])
        {
            spacesIncluded++;
        }
        answer[index] = s[index];
        index++;
    }
    printf("%s", answer);
    if (answer[index - 1] == ' ')
    {
        answer[index - 1] = '\0';
    }
    else
    {
        answer[index] = '\0';
    }
    return answer;
}