/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2025-05-07 11:20:29
 *@link:  https://leetcode.com/problems/two-sum/
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    static int ans[2] = {0, 0};
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                ans[0] = i;
                ans[1] = j;
                returnSize[0] = 2;
                return ans;
            }
        }
    }
    return ans;
}