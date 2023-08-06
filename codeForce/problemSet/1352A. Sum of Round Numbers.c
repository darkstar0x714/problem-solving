/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-06 10:51:05
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1352/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
int component = 0;

int main()
{
    int numberOfTests;

    scanf("%d", &numberOfTests);

    for (int i = 0; i < numberOfTests; i++)
    {
        int number, round[5] = {0}, digit;
        scanf("%d", &number);

        int arr[10];
        int i = 0, counter = 1;
        int r;

        while (number != 0)
        {
            r = number % 10;

            if (r != 0)
            {
                arr[i] = counter * r;
                i++;
            }

            number = number / 10;
            counter *= 10;
        }

        component = i;

        printf("%d\n", component);

        for (int k = 0; k < i; k++)
        {
            printf("%d ", arr[k]);
        }

        printf("\n");
    }
}