#include <bits/stdc++.h>
using namespace std;

// Check if the array is sorted

bool isSorted(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] <= arr[i]) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    if (isSorted(arr)) {
        cout << "Sorted";
    } else {
        cout << "Not Sorted";
    }
}

// Time-complexity: O(N)