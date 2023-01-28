/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 15:32:25
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/271/A
 * @ tags:  brute force
 * @ Problem Level:  *800
 */
#include <stdio.h>

int check_distinct(int num)
{
    int digits_seen = 0;

    while (num > 0)
    {
        int digit = num % 10;
        if (digits_seen & (1 << digit))
            return 0;

        digits_seen |= (1 << digit);
        num /= 10;
    }
    return 1;
}

int main()
{
    int inputYear;

    scanf("%d", &inputYear);

    for (int i = inputYear + 1; i < 9999; i++)
    {
        if (check_distinct(i))
        {
            printf("%d", i);
            break;
        }
    }
}