/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-05 20:21:48
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/405/problem/A
 * @ tags: sorting - implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>

void bubbleSort(int arr[], int sizeOfArr)
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

void printArr(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int numberOfelements, array[101] = {'j'};
    scanf("%d", &numberOfelements);
    for (int i = 0; i < numberOfelements; i++)
    {
        scanf("%d", &array[i]);
    }
    bubbleSort(array, numberOfelements);
    printArr(array, numberOfelements);
}