/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-08 22:11:39
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/472/problem/A
 * @ tags:  math - number theory
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int firstNum = (input % 2 == 0) ? 8 : 9;
    printf("%d %d", firstNum, input - firstNum);
}
