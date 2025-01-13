/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2025-01-13 02:55:29
 *@link:  https://leetcode.com/problems/palindrome-number/
 *@Description:
Given an integer x, return true if x is a
palindrome
, and false otherwise.
 */

#include <stdio.h>
#include <stdbool.h>

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//******************************First solution******************************* */
// bool isPalindrome(int x)
// {
//     if (x < 0)
//         return false;

//     int original = x;
//     int reversed = 0;

//     while (x != 0)
//     {
//         int digit = x % 10;

//         if (reversed > (2147483647 - digit) / 10)
//         {
//             return false;
//         }

//         reversed = reversed * 10 + digit;

//         x /= 10;
//     }
//     return original == reversed;
// }

//******************************Second solution******************************* */

bool isPalindrome(int x)
{
    // Step 1: Negative numbers are not palindromes
    if (x < 0)
        return false;

    // Step 2: Find the number of digits
    int numDigits = log10(x) + 1;

    while (x != 0)
    {
        // Step 3: Extract the first and last digit
        int lastDigit = x % 10;
        int firstDigit = x / pow(10, numDigits - 1);

        // Step 4: Compare the digits
        if (firstDigit != lastDigit)
        {
            return false; // Not a palindrome
        }

        // Step 5: Remove the first and last digits
        x = (x % (int)pow(10, numDigits - 1)) / 10;
        numDigits -= 2; // Reduce the number of digits by 2
    }

    return true; // Palindrome
}

int main()
{
    if (isPalindrome(121))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
