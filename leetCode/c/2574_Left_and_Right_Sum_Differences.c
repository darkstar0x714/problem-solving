/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-08 18:44:00
 *@link:  https://leetcode.com/problems/left-and-right-sum-differences
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *leftRightDifference(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    int *leftSumArr = (int *)calloc(numsSize, sizeof(int));
    int *RightSumArr = (int *)calloc(numsSize, sizeof(int));
    int *answer = (int *)calloc(numsSize, sizeof(int));
    leftSumArr[0] = 0;
    RightSumArr[numsSize - 1] = 0;
    for (int i = 1; i < numsSize; i++)
    {
        leftSumArr[i] = leftSumArr[i - 1] + nums[i - 1];
        RightSumArr[numsSize - i - 1] = RightSumArr[numsSize - i] + nums[numsSize - i];
    }
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d\n", RightSumArr[i]);
        answer[i] = abs(leftSumArr[i] - RightSumArr[i]);
    }
    return answer;
}