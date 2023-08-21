/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-08-21 18:05:10
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1850/problem/B
 * @ tags:  implementation - sortings
 * @ Problem Level:  *800
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Response
{
    int words;
    int quality;
    int index;
};

bool compareByQuality(const Response &a, const Response &b)
{
    return a.quality > b.quality;
}

int main()
{
    int t;
    cin >> t;

    for (int caseNum = 1; caseNum <= t; ++caseNum)
    {
        int n;
        cin >> n;

        vector<Response> responses;

        for (int i = 0; i < n; ++i)
        {
            int words, quality;
            cin >> words >> quality;
            responses.push_back({words, quality, i + 1});
        }

        sort(responses.begin(), responses.end(), compareByQuality);

        int winner = -1;
        for (const auto &response : responses)
        {
            if (response.words <= 10)
            {
                winner = response.index;
                break;
            }
        }

        cout << winner << endl;
    }

    return 0;
}
