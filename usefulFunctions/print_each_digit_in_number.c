#include <stdio.h>

void print_each_digit_integar(int x)
{
    if (x >= 10)
        print_each_digit_integar(x / 10);

    int digit = x % 10;

    printf("%d\n", digit);
}

int main()
{
    print_each_digit_integar(1245);
}
