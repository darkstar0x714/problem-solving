#include <string.h>
#include <stdlib.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return ""; // Handle empty array

    char *solution = strs[0]; // Start with the first string as the prefix

    for (int wordIndex = 1; wordIndex < strsSize; wordIndex++)
    {
        int charIndex = 0;

        // Compare the current prefix with the current string
        while (solution[charIndex] != '\0' &&
               strs[wordIndex][charIndex] != '\0' &&
               solution[charIndex] == strs[wordIndex][charIndex])
        {
            charIndex++;
        }

        // Null-terminate the prefix at the new common length
        solution[charIndex] = '\0';

        // If the prefix becomes empty, return immediately
        if (solution[0] == '\0')
            return solution;
    }

    return solution;
}
