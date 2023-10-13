#include <bits/stdc++.h>
#include <cctype>
using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    vector<int> freqArr(26, 0);
    int strLen = s.size();
    char character;
    string ans;
    s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
    for (int i = 0; i < strLen; i++)
    {
        character = tolower(s[i]);
        freqArr[character - 'a']++;
    }
    if (find(freqArr.begin(), freqArr.end(), 0) == freqArr.end())
    {
        ans = "pangram";
    }
    else
    {
        ans = "not pangram";
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
