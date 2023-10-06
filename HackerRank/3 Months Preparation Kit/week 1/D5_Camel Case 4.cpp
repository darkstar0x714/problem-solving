/**
 * @ Author: Your name
 * @ Create Time: 2023-10-06 09:59:17
 * @ As Known As: darkstar0x714
 * @ link:
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-camel-case/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s, output;
  while (getline(cin, s)) {
    s.erase(remove(s.begin(), s.end(), '\r'), s.end());
    output = "";
    char opr = s[0], typ = s[2];
    for (int i = 4; i < s.size(); i++) {
      if (opr == 'C') {
        if (i == 4 && typ == 'C') {
          output += toupper(s[i]);
          continue;
        }
        if (s[i] == ' ')
          continue;
        if (i != 4 && s[i - 1] == ' ') {
          output += toupper(s[i]);
          continue;
        }
        output += s[i];
      } else {
        if (s[i] == '(')
          break;
        if (isupper(s[i]) && i != 4) {
          output += " ";
          output += (char)(s[i] + 32);
          continue;
        }
        if (typ == 'C' && i == 4) {
          output += (char)(s[i] + 32);
          continue;
        }
        output += s[i];
      }
    }
    if (opr == 'C' && typ == 'M') {
      cout << output + "()" << endl;
    } else {
      cout << output << endl;
    }
  }
  return 0;
}