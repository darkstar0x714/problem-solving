/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-11 02:50:24
 *@link:  https://leetcode.com/problems/partition-array-according-to-given-pivot
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *pivotArray(int *nums, int numsSize, int pivot, int *returnSize)
{

    int *ans = (int *)calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    int ansIndex = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < pivot)
        {
            ans[ansIndex] = nums[i];
            ansIndex++;
        }
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == pivot)
        {
            ans[ansIndex] = nums[i];
            ansIndex++;
        }
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > pivot)
        {
            ans[ansIndex] = nums[i];
            ansIndex++;
        }
    }
    return ans;
}