/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-26 11:19:57
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/411/A
 * @ tags:  implementation - special problem
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char passWord[101] = {0}, count = 0, digitFlag = 0, smallCharFlag = 0, bigCharFlag = 0;

    scanf("%s", passWord);

    for (int i = 0; passWord[i] != 0; i++)
    {
        count++;
        if (passWord[i] >= 65 && passWord[i] <= 90)
        {
            bigCharFlag = 1;
        }
        else if (passWord[i] >= 97 && passWord[i] <= 122)
        {
            smallCharFlag = 1;
        }
        else if (passWord[i] >= 48 && passWord[i] <= 57)
        {
            digitFlag = 1;
        }
    }
    if (count >= 5 && digitFlag && smallCharFlag && bigCharFlag)
    {
        printf("Correct");
    }
    else
    {
        printf("Too weak");
    }
}