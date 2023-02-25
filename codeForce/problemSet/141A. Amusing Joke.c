/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-25 12:15:26
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/141/A
 * @ tags:  strings - sorting - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int sizeOfArr) // ascending
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < sizeOfArr - 1; j++)
        {
            if ((arr[j] > arr[j + 1]))
            {
                char tempValForSwip = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempValForSwip;
            }
        }
    }
}

int main()
{
    char firstString[100] = {0}, secondString[100] = {0}, shuffledString[100] = {0};

    gets(firstString);
    gets(secondString);
    gets(shuffledString);

    if (strlen(shuffledString) == strlen(firstString) + strlen(secondString))
    {
        strcat(firstString, secondString);

        bubbleSort(shuffledString, strlen(shuffledString));
        bubbleSort(firstString, strlen(firstString));
        if (strcmp(firstString, shuffledString) == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}