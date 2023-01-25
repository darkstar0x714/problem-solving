/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-25 12:00:08
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/617/A
 * @ tags:  math
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int x, d, r, steps;
    scanf("%d", &x);
    d = x;
    steps = d / 5;
    r = d % 5;
    if (r > 0)
    {
        steps += 1;
    }
    printf("%d", steps);
    return 0;
}

/*
#include <stdio.h>

int main()
{
    long long friendsPosition, numOfSteps = 0;
    scanf("%lld", &friendsPosition);
    while (friendsPosition)
    {
        if (friendsPosition >= 5)
        {
            numOfSteps++;
            friendsPosition = friendsPosition - 5;
        }
        else if (friendsPosition >= 4)
        {
            numOfSteps++;
            friendsPosition = friendsPosition - 4;
        }
        else if (friendsPosition >= 3)
        {
            numOfSteps++;
            friendsPosition = friendsPosition - 3;
        }
        else if (friendsPosition >= 2)
        {
            numOfSteps++;
            friendsPosition = friendsPosition - 2;
        }
        else if (friendsPosition = 1)
        {
            numOfSteps++;
            friendsPosition = friendsPosition - 1;
        }
    }
    printf("%lld", numOfSteps);
}*/