/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-08 17:58:59
 *@link: https://leetcode.com/problems/maximum-substrings-with-distinct-star
 */

int maxDistinct(char *s)
{
    int index = 0;
    int answer = 0;
    int arr[26] = {0};
    while (s[index] != '\0')
    {
        arr[s[index] - 'a']++;
        index++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            answer++;
        }
    }
    return answer;
}