#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}


class TestDataEmptyArray
{
    public:
   static  std::vector<int> get_array() {
        std::vector<int> emptyArray; // Create an empty vector (array)
        return emptyArray;
    }
     static std::exception get_expected_result() {
        return std::runtime_error("Cannot get the minimum value index from an empty sequence");
    }
};

class TestDataUniqueValues {
public:
    static std::vector<int> get_array() {
        std::vector<int> array = {1, 2, 3}; 
        return array;
    }

    static int get_expected_result() {
        std::vector<int> array = get_array();
        int min_index = std::min_element(array.begin(), array.end()) - array.begin();
        return min_index;
    }
};

class TestDataExactlyTwoDifferentMinimums
{
    public:
    static std::vector<int> get_array() {
        return std::vector<int>{5, 2, 3, 2, 1,1};
    }

    static int get_expected_result() {
        std::vector<int> array = get_array();
        int min_index = std::min_element(array.begin(), array.end()) - array.begin();
        return min_index; 
    }
};



void TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
    } catch (invalid_argument& e) {
        return;
    }
    assert(false);
}

void TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int main() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}
