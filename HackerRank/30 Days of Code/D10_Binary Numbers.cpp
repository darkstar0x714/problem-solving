/**
 * @ Author: Amir W. Fathy
 * @ AKA: darkstar0x714
 * @ Create Time: 2023-10-15 20:45:44
 * @ link:  https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true
 */

#include <bits/stdc++.h>

#include <bitset>

using namespace std;

string ltrim(const string & );
string rtrim(const string & );

int main() {
  string n_temp;
  getline(cin, n_temp);

  int n = stoi(ltrim(rtrim(n_temp)));
  bitset < 32 > binary(n);
  int max = 0, temp = 0;
  for (int i = 0; i < 32; i++) {
    if (binary[i] == 1) {
      temp++;
      if (temp > max) {
        max = temp;
      }
    } else {
      temp = 0;
    }
  }
  cout << max;
  return 0;
}

string ltrim(const string & str) {
  string s(str);

  s.erase(
    s.begin(),
    find_if(s.begin(), s.end(), not1(ptr_fun < int, int > (isspace)))
  );

  return s;
}

string rtrim(const string & str) {
  string s(str);

  s.erase(
    find_if(s.rbegin(), s.rend(), not1(ptr_fun < int, int > (isspace))).base(),
    s.end()
  );

  return s;
}