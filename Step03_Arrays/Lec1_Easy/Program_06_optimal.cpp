#include <bits/stdc++.h>
using namespace std;

// Left Rotate an array by 'd' places

int main() {
    int n, d;
    cin >> n;
    cin >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    d = d % n;
    auto it = arr.begin();
    reverse(it, it + d);      // O(d)
    reverse(it + d, it + n);  // O(n-d)
    reverse(it, it + n);      // O(n)

    for (auto element : arr) {
        cout << element << " ";
    }
}

// Time-complexity  : O(2n)
// Space-complexity : O(1)