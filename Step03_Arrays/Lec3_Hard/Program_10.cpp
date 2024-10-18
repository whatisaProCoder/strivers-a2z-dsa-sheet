#include <bits/stdc++.h>
using namespace std;

// Count Inversions

int inversionCount_BRUTE(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) cnt++;
        }
    }
    return cnt;
}
// Time-complexity  : O(n^2)
// Space-complexity : O(1)

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << inversionCount_BRUTE(arr);
}
