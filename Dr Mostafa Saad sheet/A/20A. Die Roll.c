/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-13 16:36:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/9/problem/A
 * @ tags:  math - probability
 * @ Problem Level:  *800
 */

#include <stdio.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

int main()
{
    int y, w, probability, nominator, dominator = 6;

    scanf("%d %d", &y, &w);
    probability = 6 - max(y, w) + 1;
    nominator = probability;
    if (probability % 2 == 0 && probability != 6)
    {
        nominator /= 2;
        dominator /= 2;
    }
    else if (probability % 3 == 0 && probability != 6)
    {
        nominator /= 3;
        dominator /= 3;
    }
    else if (nominator == dominator)
    {
        nominator /= 6;
        dominator /= 6;
    }
    printf("%d/%d", nominator, dominator);
}