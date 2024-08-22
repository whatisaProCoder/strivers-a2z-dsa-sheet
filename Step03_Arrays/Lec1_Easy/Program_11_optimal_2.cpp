#include <bits/stdc++.h>
using namespace std;

// Find missing number in an array.
// Using XOR-concept.

int missingNum(vector<int> arr) {
    int n = arr.size();
    int XOR_1 = 0;
    int XOR_2 = 0;

    for (int i = 0; i <= n; i++) {
        XOR_1 = XOR_1 ^ i;
        if (i < n)
            XOR_2 = XOR_2 ^ arr[i];
    }

    return XOR_1 ^ XOR_2;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Missing number : " << missingNum(arr);
}

// Time-complexity  : O(N)
// Space-complexity : O(1)
// no-need for long-type
// takes less storage than sum-concept