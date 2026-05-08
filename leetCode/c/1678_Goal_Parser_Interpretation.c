/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-08 19:45:36
 *@link:  https://leetcode.com/problems/goal-parser-interpretation
 */

char *interpret(char *command)
{
    char *arr = (char *)calloc(101, sizeof(char));
    char index = 0;
    char solutionIndex = 0;

    while (command[index] != '\0')
    {

        if (command[index] == 'G' || command[index] == 'a' || command[index] == 'l')
        {
            arr[solutionIndex] = command[index];
            solutionIndex++;
        }
        else if (command[index] == '(' && command[index + 1] == ')')
        {
            arr[solutionIndex] = 'o';
            solutionIndex++;
        }
        index++;
    }

    arr[solutionIndex + 1] = '\0';
    return arr;
}