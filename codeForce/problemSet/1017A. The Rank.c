/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-28 20:21:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1017/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */
#include <stdio.h>
int main()
{
    int numberOfStudents, English, German, Math, History, i, rank = 1;
    scanf("%d", &numberOfStudents);
    int array[1001] = {0};
    for (i = 0; i < numberOfStudents; i++)
    {
        scanf("%d %d %d %d", &English, &German, &Math, &History);
        array[i] = English + German + Math + History;
        if (array[i] > array[0])
        {
            rank++;
        }
    }
    printf("%d", rank);
    return 0;
}