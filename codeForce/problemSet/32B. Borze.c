/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-05 21:34:59
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/32/B
 * @ tags:  implementation - expression parsing
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char message[201] = {0};
    char number[201] = {0};
    int index = 0;

    scanf("%s", message);

    for (int i = 0; message[i] != 0; i++)
    {
        if (message[i] == '.')
        {
            number[index] = '0';
            index++;
        }
        else if (message[i] == '-' && message[i + 1] == '.')
        {
            number[index] = '1';
            index++;
            i += 1;
        }
        else if (message[i] == '-' && message[i + 1] == '-')
        {
            number[index] = '2';
            index++;
            i += 1;
        }
    }
    printf("%s", number);
}