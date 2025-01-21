/**
 * @ Author: Amir W. Fathy
 * @ AKA: darkstar0x714
 * @ Create Time: 2025-01-21 15:34:21
 * @ link:  https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/?envType=problem-list-v2&envId=2x67ey73
 */

int differenceOfSums(int n, int m) {
    
    int divisible=0;
    int notDivisible=0;

    for(int i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            divisible+=i;
        }
        else
        {
            notDivisible+=i;
        }
    }
    return notDivisible-divisible;
}