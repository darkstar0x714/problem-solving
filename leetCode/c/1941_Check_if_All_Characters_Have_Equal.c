bool areOccurrencesEqual(char* s) {
    char freqArray[26] = {0};
    int charIndex = 0;

    // Count frequencies of characters
    while (s[charIndex] != '\0') {
        freqArray[s[charIndex] - 'a']++;
        charIndex++;
    }

    // Find the first non-zero frequency to compare
    int targetFreq = 0;
    for (int i = 0; i < 26; i++) {
        if (freqArray[i] > 0) {
            targetFreq = freqArray[i];
            break;
        }
    }

    // Check if all non-zero frequencies are equal to the target frequency
    for (int i = 0; i < 26; i++) {
        if (freqArray[i] > 0 && freqArray[i] != targetFreq) {
            return false;
        }
    }

    return true;
}