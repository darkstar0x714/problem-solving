/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-19 14:45:18
 *@link:  https://leetcode.com/problems/count-digit-appearances
 */

int countDigitOccurrences(int *nums, int numsSize, int digit)
{

    int answer = 0;

    for (int i = 0; i < numsSize; i++)
    {
        while (nums[i] > 0)
        {
            if (nums[i] % 10 == digit)
            {
                answer++;
            }
            nums[i] /= 10;
        }
    }
    return answer;
}