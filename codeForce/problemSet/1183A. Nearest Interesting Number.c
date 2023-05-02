/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-02 21:55:22
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1183/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int sumOfDigitsInNumber(int number)
{
    int sum = 0;

    while (number >= 1)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    int userInput;

    scanf("%d", &userInput);

    while (sumOfDigitsInNumber(userInput) % 4 != 0)
    {
        userInput++;
    }
    printf("%d", userInput);
}