/**
 * @ Author: Amir W. Fathy
 * @ AKA: darkstar0x714
 * @ Create Time: 2025-01-21 14:35:41
 * @ link:  https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/?envType=problem-list-v2&envId=2x67ey73
 */

// Function to perform Bubble Sort on an array
void performBubbleSort(int array[], int arraySize) {
    for (int pass = 0; pass < arraySize - 1; pass++) {
        for (int currentIndex = 0; currentIndex < arraySize - pass - 1; currentIndex++) {
            if (array[currentIndex] > array[currentIndex + 1]) {
                int tempValue = array[currentIndex];
                array[currentIndex] = array[currentIndex + 1];
                array[currentIndex + 1] = tempValue;
            }
        }
    }
}

// Function to find two repeated numbers
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the result array
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        *returnSize = 0; // Allocation failed
        return NULL;
    }

    // Sort the array to group identical elements together
    performBubbleSort(nums, numsSize);

    int answerIndex = 0;

    // Find repeated numbers
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            result[answerIndex++] = nums[i];
            i++; // Skip the next index since it's already part of the duplicate pair
            if (answerIndex == 2) {
                break; // We've found both repeated numbers
            }
        }
    }

    *returnSize = 2; // Set the size of the result array
    return result;
}

