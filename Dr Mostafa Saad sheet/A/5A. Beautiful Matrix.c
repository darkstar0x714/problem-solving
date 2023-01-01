/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-01 05:27:12
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/263/problem/A
 * @ tags: implementation - matrix
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int matrix[5][5], movesOfRaws = 0, movesOfcolowms = 0, totalMoves = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (1 == matrix[i][j])
            {
                if (i > 2)
                {
                    movesOfRaws = i - 2;
                }
                else if (i < 2)
                {
                    movesOfRaws = 2 - i;
                }
                else if (i == 2)
                {
                    movesOfRaws = 0;
                }
                if (j > 2)
                {
                    movesOfcolowms = j - 2;
                }
                else if (j < 2)
                {
                    movesOfcolowms = 2 - j;
                }
                else if (j == 2)
                {
                    movesOfcolowms = 0;
                }
                break;
            }
        }
    }
    totalMoves = movesOfcolowms + movesOfRaws;
    printf("%d", totalMoves);
    return 0;
}