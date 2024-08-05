#include <bits/stdc++.h>
using namespace std;

// Count elements of array using map

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // interate in the map
    cout << "MAP STRUCTURE:" << endl;
    for (auto element : mpp) {
        cout << element.first << "->" << element.second << endl;
    }
    cout << endl;

    int q;
    cin >> q;
    while (q--) {
        int num;
        cin >> num;
        // fetch
        cout << num << " appears " << mpp[num] << " times" << endl;
    }
}

// every operation of map takes time-complexity: O(log n)