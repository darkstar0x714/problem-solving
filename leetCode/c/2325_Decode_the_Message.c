/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-19 01:43:03
 *@link:  https://leetcode.com/problems/decode-the-message
 */

char *decodeMessage(char *key, char *message)
{
    char subTable[27] = {0};
    int insertIndex = 0;
    static char answer[2001] = {0};

    for (int i = 0; key[i] != '\0'; i++)
    {

        if (key[i] == ' ')
        {
            continue;
        }

        int found = 0;

        for (int j = 0; j < insertIndex; j++)
        {

            if (subTable[j] == key[i])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            subTable[insertIndex] = key[i];
            insertIndex++;
        }
    }
    int lastIndex = 0;
    for (int i = 0; message[i] != '\0'; i++)
    {
        lastIndex++;
        if (message[i] == ' ')
        {
            answer[i] = ' ';
        }
        else
        {
            for (int j = 0; j < 27; j++)
            {
                if (message[i] == subTable[j])
                {
                    answer[i] = 'a' + j;
                    break;
                }
            }
        }
    }
    answer[lastIndex] = '\0';

    return answer;
}