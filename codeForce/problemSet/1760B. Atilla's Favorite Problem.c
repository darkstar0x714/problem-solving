/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-30 21:40:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1760/problem/B
 * @ tags:  implementation - greedy - strings
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                int tempValForSwip = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwip;
            }
        }
    }
}

int main()
{
    int testNumber, numberOfCharacter;
    scanf("%d", &testNumber);

    while (testNumber--)
    {
        char arr[100] = {0};

        scanf("%d", &numberOfCharacter);
        scanf("%s", arr);

        bubbleSort(arr, numberOfCharacter);
        printf("%d\n", arr[numberOfCharacter - 1] - 96);
    }
}