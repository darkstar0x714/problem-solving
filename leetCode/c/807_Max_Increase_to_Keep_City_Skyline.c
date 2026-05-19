/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-16 01:11:49
 *@link:  https://leetcode.com/problems/max-increase-to-keep-city-skyline
 */

int maxIncreaseKeepingSkyline(int **grid, int gridSize, int *gridColSize)
{

    int *maxInRows = (int *)calloc(gridSize, sizeof(int));
    int *maxInCols = (int *)calloc(gridSize, sizeof(int));

    int answer = 0;

    // Find max in each row
    for (int row = 0; row < gridSize; row++)
    {
        for (int col = 0; col < gridSize; col++)
        {
            if (grid[row][col] > maxInRows[row])
            {
                maxInRows[row] = grid[row][col];
            }
        }
    }

    // Find max in each column
    for (int col = 0; col < gridSize; col++)
    {
        for (int row = 0; row < gridSize; row++)
        {
            if (grid[row][col] > maxInCols[col])
            {
                maxInCols[col] = grid[row][col];
            }
        }
    }

    // Calculate total increase
    for (int row = 0; row < gridSize; row++)
    {
        for (int col = 0; col < gridSize; col++)
        {
            int allowedHeight;

            if (maxInRows[row] < maxInCols[col])
            {
                allowedHeight = maxInRows[row];
            }
            else
            {
                allowedHeight = maxInCols[col];
            }

            answer += allowedHeight - grid[row][col];
        }
    }

    free(maxInRows);
    free(maxInCols);

    return answer;
}