/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-29 16:25:24
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/4/C
 * @ tags:  implementation - hashing - data structures
 * @ Problem Level:  *1300
 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;

    int numberOfUsers;
    cin >> numberOfUsers;
    for (int i = 0; i < numberOfUsers; i++)
    {
        string userName;
        cin >> userName;
        auto pos = m.find(userName);
        if (pos == m.end())
        {
            m[userName]++;
            cout << "OK\n";
        }
        else
        {
            cout << userName << m[userName] << endl;
            m[userName]++;
        }
    }

    return 0;
}
