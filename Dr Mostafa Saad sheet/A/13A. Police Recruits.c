/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-07 14:55:24
 * @ Known as: DarkStar0x714
 * @ link:  http://codeforces.com/contest/427/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    long long numberOfInputs, numberOfUnTratedCases = 0, numberOfOfficersInResurve = 0;
    int scannedInput;
    scanf("%lld", &numberOfInputs);

    for (long long i = 0; i < numberOfInputs; i++)
    {
        scanf("%d", &scannedInput);

        if (numberOfOfficersInResurve == 0 && scannedInput == -1)
        {
            numberOfUnTratedCases++;
        }
        if (scannedInput != -1)
        {
            numberOfOfficersInResurve = numberOfOfficersInResurve + scannedInput;
        }
        if (numberOfOfficersInResurve != 0 && scannedInput == -1)
        {
            numberOfOfficersInResurve--;
        }
    }
    printf("%lld", numberOfUnTratedCases);
}