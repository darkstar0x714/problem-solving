/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-24 14:47:03
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/987/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
int main()
{
    int i, j, n;
    char s1[7] = "pgbory", s2[6][8] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"}, s3[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s3);
        for (j = 0; j < 6; j++)
        {
            if (s3[0] == s1[j])
            {
                s2[j][0] = 'n';
                break;
            }
        }
    }
    printf("%d\n", 6 - n);
    for (i = 0; i < 6; i++)
    {
        if (s2[i][0] != 'n')
            printf("%s\n", s2[i]);
    }
    return 0;
}