/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-14 15:37:12
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1073/B
 * @ tags:  math - implementation
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfBooks, temp, currentPosition = 0, arr[1000001] = {0};

    scanf("%d", &numberOfBooks);

    for (int i = 0; i < numberOfBooks; i++)
    {
        scanf("%d", &temp);

        arr[temp] = i + 1;
    }

    for (int i = 0; i < numberOfBooks; i++)
    {
        scanf("%d", &temp);

        if (arr[temp] > currentPosition)
        {
            printf("%d ", arr[temp] - currentPosition);
            currentPosition = arr[temp];
        }
        else
            printf("0 ");
    }
}