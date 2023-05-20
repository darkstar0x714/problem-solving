/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-20 10:41:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1833/problem/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *
 */

#include <stdio.h>
#include <string.h>

char array[50][3] = {0};
int count = 0;

int search_in_array(char array[][3], char target[3], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(array[i], target) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int countNotes(int n, char melody[])
{
    int i;
    int result = 0;

    for (i = 0; i < n - 1; i++)
    {
        char target[3] = {0};
        target[0] = melody[i];
        target[1] = melody[i + 1];

        if (!search_in_array(array, target, count))
        {
            strcpy(array[count], target);
            count++;
            result++;
        }
    }

    return result;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char melody[51];
        scanf("%s", melody);

        int result = countNotes(n, melody);
        printf("%d\n", result);

        // Reset array and count for the next test case
        memset(array, 0, sizeof(array));
        count = 0;
    }
}