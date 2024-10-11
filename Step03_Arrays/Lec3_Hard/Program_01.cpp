#include <bits/stdc++.h>
using namespace std;

// Pascal's Triangle

// Given R & C, find the element at that place
// Example: R = 5, C = 3 => returns 6
int NCR(int n, int r) {
    int res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
// Time-complexity  : O(r)
// Space-complexity : O(1)
int elementAt(int R, int C) { return NCR(R - 1, C - 1); }

int main() { cout << elementAt(5, 3); }