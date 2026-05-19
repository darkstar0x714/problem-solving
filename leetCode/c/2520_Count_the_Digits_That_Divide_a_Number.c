/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-15 11:48:30
 *@link:  https://leetcode.com/problems/count-the-digits-that-divide-a-number
 */

int countDigits(int num)
{
    int rawNumber = num;
    int answer = 0;
    int lastDigit = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        if (rawNumber % lastDigit == 0)
        {
            answer++;
        }
        num /= 10;
    }
    return answer;
}