/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-28 18:20:26
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1560/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int index, numberOfTestCases;
    scanf("%d", &numberOfTestCases);
    while (numberOfTestCases--)
    {
        scanf("%d", &index);
        int j = 0;
        int arr[1667] = {0};
        for (int i = 1; i <= 1666; i++)
        {
            if ((i % 3 != 0) && (i % 10 != 3))
            {
                arr[j] = i;
                j++;
            }
        }
        printf("%d\n", arr[index - 1]);
    }
}