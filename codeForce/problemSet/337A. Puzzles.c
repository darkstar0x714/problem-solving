/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-11 10:55:40
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/337/A
 * @ tags:  greedy
 * @ Problem Level:  *900
 */
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int sizeOfArr) // ascending
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
    int numberOfStudents, numberOfPuzzles, puzzles[1000];

    scanf("%d %d", &numberOfStudents, &numberOfPuzzles);

    for (int i = 0; i < numberOfPuzzles; i++)
    {
        scanf("%d", &puzzles[i]);
    }

    bubbleSort(puzzles, numberOfPuzzles);

    int mostHarder = puzzles[numberOfStudents - 1], mostEasy = puzzles[0];
    for (int i = 1; i <= numberOfPuzzles - numberOfStudents; i++)
    {
        if (puzzles[i + numberOfStudents - 1] - puzzles[i] < mostHarder - mostEasy)
        {
            mostHarder = puzzles[i + numberOfStudents - 1];
            mostEasy = puzzles[i];
        }
    }
    printf("%d", mostHarder - mostEasy);
}
