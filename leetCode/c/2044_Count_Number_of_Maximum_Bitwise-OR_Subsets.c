/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-11 03:20:20
 *@link:
 */

int countMaxOrSubsets(int *nums, int numsSize)
{

    int maxBitOr = 0;
    int orAnsOfCurrentSubSet = 0;
    int ans = 0;

    for (int mask = 1; mask < (1 << numsSize); mask++)
    {
        for (int i = 0; i < numsSize; i++)
        {
            if (mask & (1 << i))
            {
                orAnsOfCurrentSubSet = orAnsOfCurrentSubSet | nums[i];
            }
        }
        if (maxBitOr < orAnsOfCurrentSubSet)
        {
            maxBitOr = orAnsOfCurrentSubSet;
            ans = 1;
        }
        else if (maxBitOr == orAnsOfCurrentSubSet)
        {
            ans++;
        }
        orAnsOfCurrentSubSet = 0;
    }
    return ans;
}