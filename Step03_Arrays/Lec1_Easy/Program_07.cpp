#include <bits/stdc++.h>
using namespace std;

// Moving zeroes to end

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // processing
    int i, j = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    // j=-1 if there are no zeroes in array
    // then no need of processing further
    if (j != -1)
        for (i = j + 1; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }

    for (auto element : arr) {
        cout << element << " ";
    }
}

// Time-complexity :  O(N)
// Space-complexity : O(1)