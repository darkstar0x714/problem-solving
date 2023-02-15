/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-15 21:50:23
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/61/A
 * @ tags:  binary - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[101] = {"k"};
    char arr2[101] = {"j"};

    gets(arr1);
    gets(arr2);

    for (int i = 0; i < strlen(arr1); i++)
    {
        if (arr1[i] == arr2[i])
        {
            printf("0");
        }
        else
            printf("1");
    }
}
