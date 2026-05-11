/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-11 01:38:00
 *@link:  https://leetcode.com/problems/concatenate-array-with-reverse
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *concatWithReverse(int *nums, int numsSize, int *returnSize)
{

    *returnSize = 2 * numsSize;
    int *ans = (int *)calloc(numsSize * 2, sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i];
        ans[(2 * numsSize) - i - 1] = nums[i];
    }
    return ans;
}