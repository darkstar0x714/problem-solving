/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-20 12:56:31
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/125/problem/A
 * @ tags:  implementation - math
 * @ Problem Level:  *1400
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int inches = round(n / 3.0);        // convert to inches and round
    int feet = inches / 12;             // convert to feet
    int remaining_inches = inches % 12; // calculate remaining inches
    printf("%d %d\n", feet, remaining_inches);
}