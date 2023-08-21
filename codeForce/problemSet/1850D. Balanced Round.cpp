/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-21 19:52:00
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1850/problem/D
 * @ tags:  implementation - greedy - brute force - sorting
 * @ Problem Level:  *900
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numberOfTestCases;

    long long k, numberOfProblems;

    cin >> numberOfTestCases;

    while (numberOfTestCases--)
    {
        cin >> numberOfProblems >> k;
        long long counter = 1, maxCounter = 0;

        long long pro[numberOfProblems] = {0};

        for (int i = 0; i < numberOfProblems; i++)
        {
            cin >> pro[i];
        }

        sort(pro, pro + numberOfProblems);

        for (int i = 0; i < numberOfProblems - 1; i++)
        {
            if (pro[i + 1] - pro[i] <= k)
            {
                counter++;
            }
            else
            {
                maxCounter = max(maxCounter, counter);
                counter = 1;
            }
        }
        maxCounter = max(maxCounter, counter);
        cout << numberOfProblems - maxCounter << endl;
    }
}