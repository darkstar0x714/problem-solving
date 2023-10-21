#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  getline(cin, S);

  try {
    int num = stoi(S);
    cout << num;
  } catch (invalid_argument const &e) {
    cout << "Bad String";
  }

  return 0;
}
