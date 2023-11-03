#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}



int main() {
    int numberOfTests;
    cin>>numberOfTests;
    
    for (int i=0; i<numberOfTests; i++) {
    int number;
    cin>>number;
    if (isPrime(number)) {
    cout<<"Prime"<<endl;
    }
    else{
    cout<<"Not prime"<<endl;
    }
    }   
    return 0;
}
