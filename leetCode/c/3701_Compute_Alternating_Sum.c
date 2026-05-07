/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-07 23:51:07
 *@link:  https://leetcode.com/problems/compute-alternating-sum
 */

int alternatingSum(int *nums, int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (i % 2 != 0)
        {
            nums[i] = -1 * nums[i];
        }
        sum = sum + nums[i];
    }
    return sum;
}