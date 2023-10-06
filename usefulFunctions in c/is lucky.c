int isLucky(int num)
{
    // Traverse through all digits of num
    while (num != 0)
    {
        // Get the last digit
        int last_digit = num % 10;

        // If last digit is not either 7 or 4,
        // return 0
        if (last_digit != 7 && last_digit != 4)
            return 0;

        // Remove last digit from num
        num = num / 10;
    }

    // Return 1 if all digits of num are either 7 or 4
    return 1;
}