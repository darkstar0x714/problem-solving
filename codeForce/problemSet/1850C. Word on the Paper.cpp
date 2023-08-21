/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-21 18:52:07
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1850/problem/C
 * @ tags:  implementation - strings
 * @ Problem Level:  *800
 */

#include <iostream>

using namespace std;

int main()
{
    char arr[8][8] = {0};
    int numberOfTestCases;
    string word;
    cin >> numberOfTestCases;

    while (numberOfTestCases--)
    {
        bool firstLetter = false;

        for (int rows = 0; rows < 8; rows++)
        {
            for (int col = 0; col < 8; col++)
            {
                cin >> arr[rows][col];
                if (firstLetter == false && arr[rows][col] != '.')
                {
                    word += arr[rows][col];
                    firstLetter = true;
                }
                else if (firstLetter == true && arr[rows][col] != '.')
                {
                    word += arr[rows][col];
                }
            }
        }
        cout << word << endl;
        word.clear();
    }
}