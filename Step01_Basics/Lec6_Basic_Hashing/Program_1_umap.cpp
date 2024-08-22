#include <bits/stdc++.h>
using namespace std;

// Count elements of array using unordered map

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute
    unordered_map<int, int> mpp;
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

// unordered_map takes time-complexity: O(1) [best/average case]
//                                      O(n) [worst case]

// use unordered_map in most cases,
// switch to map if umap performs worse

// umap does not support pair<>, vector<> as key
// umap only supports int, double, char, string