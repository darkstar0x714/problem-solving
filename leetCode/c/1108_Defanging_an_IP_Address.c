/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2025-01-19 22:40:56
 *@link:  https://leetcode.com/problems/defanging-an-ip-address/
 *@Description:
 */

char *defangIPaddr(char *address)
{
    // Calculate the size of the resulting string
    int addressLen = strlen(address);
    int answerLen = addressLen + 6; // For each '.', we add 2 extra characters ('[' and ']')

    // Allocate memory for the result string
    char *answer = (char *)malloc((answerLen + 1) * sizeof(char)); // +1 for null-terminator
    if (!answer)
    {
        return NULL; // Return NULL if memory allocation fails
    }

    int addressCharIndex = 0;
    int answerCharIndex = 0;

    // Traverse the input string
    while (address[addressCharIndex] != '\0')
    {
        if (address[addressCharIndex] != '.')
        {
            answer[answerCharIndex++] = address[addressCharIndex];
        }
        else
        {
            // Replace '.' with "[.]"
            answer[answerCharIndex++] = '[';
            answer[answerCharIndex++] = '.';
            answer[answerCharIndex++] = ']';
        }
        addressCharIndex++;
    }

    // Null-terminate the result string
    answer[answerCharIndex] = '\0';

    return answer;
}
