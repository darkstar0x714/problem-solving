/**
 * @ Author: Amir W. Fathy
 * @ AKA: darkstar0x714
 * @ Create Time: 2025-01-21 14:10:13
 * @ link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/?envType=problem-list-v2&envId=2x67ey73
 */

int minimumOperations(int* nums, int numsSize) {

    int minOperationRequired=0;

    for(int number=0;number<numsSize;number++)
    {
        if(nums[number]%3!=0.0)
        {
            minOperationRequired++;
        }
    }

    return minOperationRequired;
}