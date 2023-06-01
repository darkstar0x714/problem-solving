/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-01 10:49:46
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1316/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfTestCases, numberOfStudents, maxGrade;
    int studentDegree = 0;

    scanf("%d", &numberOfTestCases);
    while (numberOfTestCases--)
    {
        scanf("%d%d", &numberOfStudents, &maxGrade);
        int sum = 0;
        for (int i = 0; i < numberOfStudents; i++)
        {
            scanf("%d", &studentDegree);
            sum = sum + studentDegree;
        }

        if (sum >= maxGrade)
        {
            printf("%d\n", maxGrade);
        }
        else
        {
            printf("%d\n", sum);
        }
    }
}