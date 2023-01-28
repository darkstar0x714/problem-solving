int check_distinct(int num)
{
    int digits_seen = 0;

    while (num > 0)
    {
        int digit = num % 10;
        if (digits_seen & (1 << digit))
            return 0;

        digits_seen |= (1 << digit);
        num /= 10;
    }
    return 1;
}