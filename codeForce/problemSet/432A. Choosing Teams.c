/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-01 20:17:32
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/432/A
 * @ tags:  sorting - greedy - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int numberOfStudents, numberOfContests, students[2001] = {5}, counter = 0;

    scanf("%d%d", &numberOfStudents, &numberOfContests);

    for (int i = 0; i < numberOfStudents; i++)
    {
        scanf("%d", &students[i]);
        if (students[i] <= 5 - numberOfContests)
        {
            counter++;
        }
    }
    printf("%d", counter / 3);
}