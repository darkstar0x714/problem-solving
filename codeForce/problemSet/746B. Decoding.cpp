/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-28 13:31:15
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/746/problem/B
 * @ tags:  implementation - strings
 * @ Problem Level:  *900
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int codeLen = 0, counter = 0, dir = 1;
    string codedMessage, ans;

    cin >> codeLen;
    cin >> codedMessage;

    if (codeLen % 2 == 0)
    {
        dir = 0;
    }

    while (counter < codeLen)
    {
        char c = codedMessage[0];
        codedMessage.erase(codedMessage.begin());
        if (dir)
        {
            ans.push_back(c);
            dir = 0;
        }
        else
        {
            ans = c + ans;
            dir = 1;
        }

        counter++;
    }
    cout << ans;
}