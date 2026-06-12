#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> integerToBinary(int a) {
    int b = 1;
    int k = 0;
    bool work = false;
    vector<int> v;

    if (a == 0) {
        v.push_back(0);
        return v;
    }

    // function to find k (amount of digits needed in binary)
    while (work == false) {
        if (b == a) {
            work = true;
        }
        if (b < a) {
            b *= 2;
            k++;
        }
        if (b > a) {
            k--;
            work = true;
        }
    }

    // function to make the binary
    while (k >= 0) {
        if (a >= pow(2, k)) {
            v.push_back(1);
            a -= pow(2, k);
        }
        else {
            v.push_back(0);
        }
        k--;
    }

    return v;
}