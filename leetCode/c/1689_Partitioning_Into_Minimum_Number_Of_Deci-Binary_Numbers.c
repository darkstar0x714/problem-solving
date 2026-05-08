/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-08 18:21:51
 *@link:  https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers
 */

int minPartitions(char *n)
{
    int maxdigitOnNumber = 0;
    int index = 0;

    while (n[index] != '\0')
    {
        int d = n[index] - '0';

        if (d > maxdigitOnNumber)
        {
            maxdigitOnNumber = d;
        }

        index++;
    }

    return maxdigitOnNumber;
}