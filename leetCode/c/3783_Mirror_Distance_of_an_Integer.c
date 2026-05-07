/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-07 23:46:33
 *@link: https://leetcode.com/problems/mirror-distance-of-an-integer
 */

int mirrorDistance(int n)
{

    int rawNumber = n;
    int reversedNumber = 0;
    int lastDigit = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        n = n / 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
    }
    printf("%d", reversedNumber);
    return abs(reversedNumber - rawNumber);
}