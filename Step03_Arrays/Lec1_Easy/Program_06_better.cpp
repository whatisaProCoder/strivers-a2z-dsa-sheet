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
    vector<int> temp;
    for (int i = 0; i < d; i++) {
        temp.push_back(arr[i]);
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }

    for (auto element : arr) {
        cout << element << " ";
    }
}

// Time-complexity:  O(n+d)
// Space-complexity: O(d)