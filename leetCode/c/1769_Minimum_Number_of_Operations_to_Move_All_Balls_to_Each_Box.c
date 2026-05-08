/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-08 19:08:27
 *@link:  https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *minOperations(char *boxes, int *returnSize)
{
    int countOfBoxes = 0;

    while (boxes[countOfBoxes] != '\0')
    {
        countOfBoxes++;
    }

    *returnSize = countOfBoxes;
    int *answer = (int *)calloc(countOfBoxes, sizeof(int));

    for (int i = 0; i < countOfBoxes; i++)
    {
        for (int j = 0; j < countOfBoxes; j++)
        {
            if (boxes[j] == '1')
            {
                answer[i] = answer[i] + abs(i - j);
            }
        }
    }

    return answer;
}