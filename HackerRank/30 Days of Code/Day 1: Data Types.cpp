#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main() {
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  // Declare second integer, double, and String variables.
  int j;
  double e;
  string ss;

  // Read and save an integer, double, and String to your variables.
  cin >> j >> e;
  cin.ignore();     // Ignore the newline character
  getline(cin, ss); // Read the entire line of text
  // Print the sum of both integer variables on a new line.
  std::cout << i + j << std::endl;
  // Print the sum of the double variables on a new line.
  cout << fixed << setprecision(1) << d + e << endl;
  // Concatenate and print the String variables on a new line
  std::cout << s + ss << std::endl;
  // The 's' variable above should be printed first.

  return 0;
}