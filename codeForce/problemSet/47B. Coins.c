/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-20 20:33:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/47/problem/B
 * @ tags:  implementation
 * @ Problem Level:  *1200
 */
#include <stdio.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

int main()
{
    int A = 0, B = 0, C = 0;
    char expresion[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", expresion);
        if (expresion[1] == '>')
        {
            if (expresion[0] == 'A')
                A++;
            else if (expresion[0] == 'B')
                B++;
            else
                C++;
        }
        else if (expresion[1] == '<')
        {
            if (expresion[2] == 'A')
                A++;
            else if (expresion[2] == 'B')
                B++;
            else
                C++;
        }
    }

    if (A == 1 && B == 1 && C == 1)
    {
        printf("Impossible\n");
    }
    else
    {
        int min = MIN(MIN(A, B), C);
        int max = MAX(MAX(A, B), C);
        int mid = A + B + C - min - max;

        if (min == A)
            printf("A");
        else if (min == B)
            printf("B");
        else
            printf("C");

        if (mid == A)
            printf("A");
        else if (mid == B)
            printf("B");
        else
            printf("C");

        if (max == A)
            printf("A");
        else if (max == B)
            printf("B");
        else
            printf("C");
    }
}
