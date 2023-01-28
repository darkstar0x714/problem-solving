/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 15:47:12
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/122/A
 * @ tags:  number theory - brute force
 * @ Problem Level:  *1000
 */

#include <stdio.h>

int isLucky(int num)
{
    // Traverse through all digits of num
    while (num != 0)
    {
        // Get the last digit
        int last_digit = num % 10;

        // If last digit is not either 7 or 4,
        // return 0
        if (last_digit != 7 && last_digit != 4)
            return 0;

        // Remove last digit from num
        num = num / 10;
    }

    // Return 1 if all digits of num are either 7 or 4
    return 1;
}

int main()
{
    int inputNumber, flag = 0;
    scanf("%d", &inputNumber);

    for (int i = 1; i <= inputNumber; i++)
    {
        if (isLucky(i) && inputNumber % i == 0)
        {
            flag = 1;
            break;
        }

        else
            flag = 0;
    }
    (flag) ? printf("YES") : printf("NO");
}