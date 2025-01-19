#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double *convertTemperature(double celsius, int *returnSize)
{
    // Allocate memory for the result array
    double *returnArray = (double *)malloc(2 * sizeof(double));
    if (!returnArray)
    {
        // Handle memory allocation failure
        *returnSize = 0;
        return NULL;
    }

    // Calculate Kelvin and Fahrenheit values
    returnArray[0] = celsius + 273.15;
    returnArray[1] = celsius * 1.80 + 32.00;

    // Set returnSize to 2, as we're returning an array of 2 elements
    *returnSize = 2;

    return returnArray;
}
