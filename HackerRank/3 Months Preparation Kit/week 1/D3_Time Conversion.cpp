/**
 * @ Author: Your name
 * @ Create Time: 2023-10-06 09:40:28
 * @ As Known As: darkstar0x714
 * @ link:
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-time-conversion/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
  string sol;

  if (s[8] == 'P') {
    // Handle PM
    if (s.substr(0, 2) != "12") {
      sol = to_string(stoi(s.substr(0, 2)) + 12);
    } else {
      sol = "12";
    }
    sol = sol + s.substr(2, 6);
  } else {
    // Handle AM
    if (s.substr(0, 2) == "12") {
      sol = "00";
    } else {
      sol = s.substr(0, 2);
    }
    sol = sol + s.substr(2, 6);
  }
  return sol;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = timeConversion(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
