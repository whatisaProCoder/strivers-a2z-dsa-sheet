#include <bits/stdc++.h>
using namespace std;

// Count elements of array

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int num;
        cin >> num;
        // fetch
        cout << num << " appears " << hash[num] << " times" << endl;
    }

    // inside main:
    // int arr[10^6] max capacity
    // bool arr[10^7] max capacity

    // globally:
    // int arr[10^7] max capacity
    // bool arr[10^8] max capacity
}