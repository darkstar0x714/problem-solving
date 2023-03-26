/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-26 19:30:50
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/102/problem/B
 * @ tags:  implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100001];
    int count = 0;
    scanf("%s", &arr);
    while (arr[1])
    {
        int i, sum = 0;
        for (i = 0; arr[i]; i++)
        {
            sum += arr[i] - 48;
        }
        count++;
        sprintf(arr, "%d", sum);
    }
    printf("%d\n", count);
}
