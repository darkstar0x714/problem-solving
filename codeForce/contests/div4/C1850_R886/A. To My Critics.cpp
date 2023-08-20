/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-20 17:12:33
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1850/problem/A
 * @ tags:  sorting - implementation
 * @ Problem Level:  *800
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numberOfTestes;

    cin >> numberOfTestes;

    for (int i = 0; i < numberOfTestes; i++)
    {
        int arr[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(begin(arr), end(arr));

        if (arr[1] + arr[2] >= 10)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}