#include <bits/stdc++.h>
using namespace std;

// Find missing number in an array.
// Use Hashing.

int missingNum(vector<int> arr) {
    int n = arr.size();
    vector<int> hash(n + 1);
    for (int i = 0; i < n - 1; i++) { // O(N)
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++) { // O(N)
        if (hash[i] == 0) {
            return i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number : " << missingNum(arr);
}

// Time-complexity  : O(2N)
// Space-complexity : O(N)