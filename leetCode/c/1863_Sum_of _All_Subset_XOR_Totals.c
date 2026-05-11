/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-11 02:13:25
 *@link:  https://leetcode.com/problems/sum-of-all-subset-xor-totals
 */

int subsetXORSum(int *nums, int numsSize)
{

    int answer = 0;
    int currentSetXor = 0;

    for (int mask = 0; mask < (1 << numsSize); mask++)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (mask & (1 << i))
            {
                currentSetXor = currentSetXor ^ nums[i];
                printf("%d\t", nums[i]);
            }
        }
        printf("\n");
        answer = answer + currentSetXor;
        currentSetXor = 0;
    }
    return answer;
}