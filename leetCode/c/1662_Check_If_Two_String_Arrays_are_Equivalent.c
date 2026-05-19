/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-19 15:02:36
 *@link:  https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent
 */

bool arrayStringsAreEqual(char **word1, int word1Size, char **word2, int word2Size)
{

    bool answer = false;

    char word1Equ[1001] = {0};
    char word2Equ[1001] = {0};

    int word1EquLastIndex = 0;
    int word2EquLastIndex = 0;

    for (int i = 0; i < word1Size; i++)
    {
        int index = 0;
        while (word1[i][index] != '\0')
        {
            word1Equ[word1EquLastIndex] = word1[i][index];
            word1EquLastIndex++;
            index++;
        }
    }
    word1Equ[word1EquLastIndex] = '\0';

    for (int i = 0; i < word2Size; i++)
    {
        int index = 0;
        while (word2[i][index] != '\0')
        {
            word2Equ[word2EquLastIndex] = word2[i][index];
            word2EquLastIndex++;
            index++;
        }
    }
    word2Equ[word2EquLastIndex] = '\0';

    if (word1EquLastIndex != word2EquLastIndex)
    {
        answer = false;
    }
    else
    {
        for (int i = 0; i < word1EquLastIndex; i++)
        {
            if (word1Equ[i] == word2Equ[i])
            {
                answer = true;
                continue;
            }
            else
            {
                answer = false;
                break;
            }
        }
    }
    return answer;
}