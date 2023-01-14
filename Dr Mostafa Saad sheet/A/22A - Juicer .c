/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-14 14:14:36
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/709/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>

int main()
{
    long long numberOfOranges, maxSizeOfOrange, maxWasteSize, currentWasteSize = 0, currentOrangeSize, numberOfEmptyRequired = 0;

    scanf("%lld %lld %lld", &numberOfOranges, &maxSizeOfOrange, &maxWasteSize);
    for (long long i = 0; i < numberOfOranges; i++)
    {
        scanf("%lld", &currentOrangeSize);
        if (currentOrangeSize <= maxSizeOfOrange)
        {
            currentWasteSize = currentWasteSize + currentOrangeSize;
        }
        if (currentWasteSize > maxWasteSize)
        {
            currentWasteSize = 0;
            numberOfEmptyRequired++;
        }
    }
    printf("%lld", numberOfEmptyRequired);
}