/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-06-07 22:02:20
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/177/A2
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long i, j, matrixLen, sum = 0, matrix[102][102] = {0};

    scanf("%lld", &matrixLen);

    for (i = 0; i < matrixLen; i++)
    {
        for (j = 0; j < matrixLen; j++)
        {
            scanf("%lld", &matrix[i][j]);
        }
    }

    // main diagonal
    for (i = 0, j = 0; i < matrixLen, j < matrixLen; i++, j++)
    {
        sum += matrix[i][j];
        matrix[i][j] = 0;
    }

    // secondary diagonal
    for (i = 0, j = matrixLen - 1; i < matrixLen, j >= 0; i++, j--)
    {
        sum += matrix[i][j];
        matrix[i][j] = 0;
    }

    // mid row
    for (i = 0; i < matrixLen; i++)
    {
        sum += matrix[matrixLen / 2][i];
        matrix[matrixLen / 2][i] = 0;
    }

    // mid column
    for (i = 0; i < matrixLen; i++)
    {
        sum += matrix[i][matrixLen / 2];
        matrix[i][matrixLen / 2] = 0;
    }
    printf("%lld", sum);
}