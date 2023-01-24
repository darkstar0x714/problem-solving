
/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-24 06:28:26
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/282/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int n, i, x = 0;
    char op[4] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", op);
        if (op[0] == '+' || op[1] == '+' || op[2] == '+')
            x++;
        else
            x--;
    }

    printf("%d", x);

    return 0;
}