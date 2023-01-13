/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-13 15:59:44
 * @ Known as: DarkStar0x714
 * @ link: https://codeforces.com/contest/265/problem/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char stones[50] = {0}, instructions[50] = {0}, position = 0;

    scanf("%s", &stones);
    scanf("%s", &instructions);

    for (int i = 0; i < sizeof(instructions); i++)
    {
        if ((instructions[i] != 0) && (instructions[i] == stones[position]))
        {
            position++;
        }
    }
    printf("%d", position + 1); // for 1-based counting
}