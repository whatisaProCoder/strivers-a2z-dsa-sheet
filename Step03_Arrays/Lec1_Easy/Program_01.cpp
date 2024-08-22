#include <bits/stdc++.h>
using namespace std;

// globally => maxArrSize: 10^7
// locally  => maxArrSize: 10^6

// Largest Element in an Array

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // processing
    int largest = arr[0];
    for (auto element : arr) {
        if (element > largest) {
            largest = element;
        }
    }

    cout << "Largest element : " << largest;
}

// Time-complexity : O(N)