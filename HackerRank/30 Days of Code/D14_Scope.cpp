#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

class Difference {
private:
  std::vector<int> elements;

public:
  int maximumDifference;

  Difference(std::vector<int> arr) { elements = arr; }

  void computeDifference() {
    int max_element = *std::max_element(elements.begin(), elements.end());
    int min_element = *std::min_element(elements.begin(), elements.end());
    maximumDifference = std::abs(max_element - min_element);
  }
};

int main() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);

  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  Difference d(a);
  d.computeDifference();
  std::cout << d.maximumDifference;

  return 0;
}