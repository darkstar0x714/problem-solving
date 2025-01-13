// Define an array to store Roman numeral values for fast access
int romanValues[] = {0, 1, 5, 10, 50, 100, 500, 1000};

// Function to get the Roman numeral value (optimized with an array)
int getRomanValue(char romanLetter)
{
    // Convert the Roman letter to an index ('I' -> 1, 'V' -> 2, ..., 'M' -> 7)
    switch (romanLetter)
    {
    case 'I':
        return romanValues[1];
    case 'V':
        return romanValues[2];
    case 'X':
        return romanValues[3];
    case 'L':
        return romanValues[4];
    case 'C':
        return romanValues[5];
    case 'D':
        return romanValues[6];
    case 'M':
        return romanValues[7];
    default:
        return 0; // Invalid character, ideally handled earlier
    }
}

// Main function to convert Roman numeral to integer
int romanToInt(char *s)
{
    int solution = 0;
    int index = 0;

    while (s[index] != '\0')
    {
        int currentVal = getRomanValue(s[index]);
        int nextVal = getRomanValue(s[index + 1]);

        // If the current value is greater than or equal to the next, add it to solution
        if (currentVal >= nextVal)
        {
            solution += currentVal;
        }
        else
        { // If current value is smaller (e.g., 'I' before 'V'), subtract it
            solution -= currentVal;
        }
        index++;
    }

    return solution;
}
