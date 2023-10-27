#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class AdvancedArithmetic {
public:
  virtual int divisorSum(int n) = 0;
};
class Calculator : public AdvancedArithmetic {
public:
  int divisorSum(int n) {
    int ans = 0;
    for (int i = n; i >= 1; i--) {
      if (n % i == 0) {
        ans += i;
      }
    }
    return ans;
  }
};

int main() {
  int n;
  cin >> n;
  AdvancedArithmetic *myCalculator = new Calculator();
  int sum = myCalculator->divisorSum(n);
  cout << "I implemented: AdvancedArithmetic\n" << sum;
  return 0;
}