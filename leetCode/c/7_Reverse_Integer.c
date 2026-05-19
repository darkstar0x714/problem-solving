/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-16 01:30:49
 *@link:  https://leetcode.com/problems/reverse-integer
 */

int reverse(int x)
{

    int answer = 0;
    int rawNumber = x;

    if (sizeof(x) > 32)
    {
        return 0;
    }

    if (x == 0)
    {
        answer = 0;
    }
    else if (x > 0)
    {
        while (x > 0)
        {
            int lastDigit = x % 10;
            if (answer > INT_MAX / 10 || answer < INT_MIN / 10)
            {
                return 0;
            }
            answer = answer * 10 + lastDigit;
            x /= 10;
        }
    }
    else
    {
        while (x < 0)
        {
            int lastDigit = x % 10;
            if (answer > INT_MAX / 10 || answer < INT_MIN / 10)
            {
                return 0;
            }
            answer = answer * 10 + lastDigit;
            x /= 10;
        }
    }

    return answer;
}