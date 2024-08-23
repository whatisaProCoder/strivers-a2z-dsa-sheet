#include <bits/stdc++.h>
using namespace std;

// Left Rotate an array by one place

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (auto element : arr) {
        cout << element << " ";
    }
}

// Time-complexity :  O(N)
// Space-complexity : O(1)