/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-13 23:16:49
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1408/A
 * @ tags:  constructive algorithms
 * @ Problem Level:  *800
 */
/*
#include <stdio.h>

int main()
{
    int numberOfTests, numberOfElements, ans[101] = {0};

    scanf("%d", &numberOfTests);
    while (numberOfTests--)
    {
        int matrix[101][3] = {0};
        int index = 0;
        scanf("%d", &numberOfElements);
        for (int i = 0; i < numberOfElements; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }
        for (int i = 0; i < numberOfElements; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    ans[0] = matrix[0][0];
                }
                else
                {
                    index++;
                    if (ans[index - 1] == matrix[j][i])
                    {
                        ans[index] = matrix[j + 1][i];
                    }
                    else
                    {
                        ans[index] = matrix[j][i];
                    }
                }
            }
        }
        for (int i = 0; i < numberOfElements; i++)
        {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
}
*/
/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-13 23:16:49
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1408/A
 * @ tags:  constructive algorithms
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &c[i]);
        }
        int p[n];
        p[0] = a[0];
        for (int i = 1; i < n - 1; i++)
        {
            int avail[3] = {1, 1, 1}; // initialize all to 1 (true)
            for (int j = 0; j < 3; j++)
            {
                if (a[i] == p[i - 1] || a[i] == p[(i + 1) % n])
                {
                    avail[0] = 0; // not available
                }
                if (b[i] == p[i - 1] || b[i] == p[(i + 1) % n])
                {
                    avail[1] = 0; // not available
                }
                if (c[i] == p[i - 1] || c[i] == p[(i + 1) % n])
                {
                    avail[2] = 0; // not available
                }
            }
            for (int j = 0; j < 3; j++)
            {
                if (avail[j])
                {
                    p[i] = (j == 0) ? a[i] : ((j == 1) ? b[i] : c[i]);
                    break;
                }
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (a[n - 1] != p[n - 2] && a[n - 1] != p[0] && a[n - 1] != p[n - 1])
            {
                p[n - 1] = a[n - 1];
                break;
            }
            if (b[n - 1] != p[n - 2] && b[n - 1] != p[0] && b[n - 1] != p[n - 1])
            {
                p[n - 1] = b[n - 1];
                break;
            }
            if (c[n - 1] != p[n - 2] && c[n - 1] != p[0] && c[n - 1] != p[n - 1])
            {
                p[n - 1] = c[n - 1];
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", p[i]);
        }
        printf("\n");
    }
    return 0;
}
