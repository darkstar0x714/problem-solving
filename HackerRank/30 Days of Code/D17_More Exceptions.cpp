#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>

using namespace std;

// Write your code here
class Calculator {
public:
  int power(int a, int b) {
    if (a >= 0 && b >= 0) {
      return pow(a, b);
    } else {
      throw runtime_error("n and p should be non-negative");
    }
  }

private:
};

int main() {
  Calculator myCalculator = Calculator();
  int T, n, p;
  cin >> T;
  while (T-- > 0) {
    if (scanf("%d %d", &n, &p) == 2) {
      try {
        int ans = myCalculator.power(n, p);
        cout << ans << endl;
      } catch (exception &e) {
        cout << e.what() << endl;
      }
    }
  }
}