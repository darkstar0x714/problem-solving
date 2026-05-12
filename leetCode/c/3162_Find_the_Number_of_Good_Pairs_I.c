/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-12 21:03:47
 *@link:  https://leetcode.com/problems/find-the-number-of-good-pairs-i
 */

int numberOfPairs(int *nums1, int nums1Size, int *nums2, int nums2Size, int k)
{
    int answer = 0;

    for (int i = 0; i < nums1Size; i++)
    {
        for (int j = 0; j < nums2Size; j++)
        {
            if ((nums1[i]) % (nums2[j] * k) == 0)
            {
                answer++;
            }
        }
    }

    return answer;
}