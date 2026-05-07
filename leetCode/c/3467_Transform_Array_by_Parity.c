/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-08 00:03:50
 *@link:  https://leetcode.com/problems/transform-array-by-parity
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *transformArray(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int lastindex = 0;
    int *answer = (int *)calloc(numsSize, sizeof(int));
    int ones = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 != 0)
        {
            ones++;
        }
    }
    for (int i = 0; i < numsSize - ones; i++)
    {
        answer[i] = 0;
        lastindex++;
    }
    for (int i = lastindex; i < numsSize; i++)
    {
        answer[i] = 1;
    }
    return answer;
}