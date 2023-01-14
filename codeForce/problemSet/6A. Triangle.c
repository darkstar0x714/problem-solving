/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-14 15:12:22
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/6/a || https://codeforces.com/contest/6/problem/A
 * @ tags:  brute force - geometry
 * @ Problem Level:  *900
 */

/*!IDEA

triangle must sum of 2 sides is grater than other side
SEGMENT must sum of 2 sides is equal than other side

---------------------------------------------------------------------
from 4 digits we need to get combinations of only 3 number
as following

A,B,C,D:-

A,B,C
A,C,D
B,C,D
A,B,D
*/

#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ((a < b + c && b < a + c && c < a + b) ||
        (a < b + d && b < a + d && d < a + b) ||
        (a < d + c && d < a + c && c < a + d) ||
        (d < b + c && b < d + c && c < d + b))
    {
        printf("TRIANGLE\n");
    }
    else if ((a == b + c || b == a + c || c == a + b) ||
             (a == b + d || b == a + d || d == a + b) ||
             (a == d + c || d == a + c || c == a + d) ||
             (d == b + c || b == d + c || c == d + b))
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
}