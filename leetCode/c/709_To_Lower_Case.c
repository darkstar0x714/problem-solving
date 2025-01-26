/**
 * @ Author: Amir W. Fathy
 * @ AKA: darkstar0x714
 * @ Create Time: 2025-01-26 12:40:32
 * @ link: https://leetcode.com/problems/to-lower-case/description/?envType=problem-list-v2&envId=2x67ey73
 */

char* toLowerCase(char* s) {
    static char lower[101]={0}; 
    int index = 0;

    while (s[index] != '\0') {
        if (s[index] >= 'A' && s[index] <= 'Z') {
            lower[index] = s[index] + 32; 
        } else {
            lower[index] = s[index]; 
        }
        index++;
    }

    lower[index] = '\0';
    return lower;
}