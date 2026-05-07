/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-07 23:36:24
 *@link: https://leetcode.com/problems/find-the-degree-of-each-vertex
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findDegrees(int **matrix, int matrixSize, int *matrixColSize, int *returnSize)
{
    *returnSize = matrixSize;
    int *arr = (int *)calloc(matrixSize, sizeof(int));
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            if (matrix[i][j])
            {
                arr[i]++;
            }
        }
    }

    return arr;
}