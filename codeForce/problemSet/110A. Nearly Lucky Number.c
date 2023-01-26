/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-26 11:15:55
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/110/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long inputNumber;
    int luckyCounter = 0;

    scanf("%lld", &inputNumber);

    while (inputNumber > 0)
    {
        if (inputNumber % 10 == 4 || inputNumber % 10 == 7)
        {
            luckyCounter++;
        }
        inputNumber = inputNumber / 10;
    }
    if (luckyCounter == 4 || luckyCounter == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}