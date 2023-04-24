/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-24 11:13:01
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/16/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    char row[101] = {0}, LastRow[101] = {0}, element, nextElement;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", row);
        if (i == 0)
        {
            strcpy(LastRow, row);
        }
        for (int j = 0; j < m; j++)
        {
            if (row[0] != row[j])
            {
                printf("NO");
                return 0;
            }
        }
        if (strcmp(LastRow, row) == 0 && i != 0)
        {
            printf("NO");
            return 0;
        }
        strcpy(LastRow, row);
    }
    printf("YES");
}