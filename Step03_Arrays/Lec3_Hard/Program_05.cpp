#include <bits/stdc++.h>
using namespace std;

// Largest Subarray with 0 Sum

int maxLen_BRUTE(vector<int>& arr, int n) {
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                int len = j - i + 1;
                max_len = max(max_len, len);
            }
        }
    }
    return max_len;
}
// Time-complexity  : O(n^2)
// Space-complexity : o(1)

int maxLen_OPTIMAL(vector<int>& arr, int n) {
    map<int, int> mpp;
    int sum = 0;
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0)
            max_len = i + 1;
        else {
            if (mpp.find(sum) != mpp.end())
                max_len = max(max_len, i - mpp[sum]);
            else
                mpp[sum] = i;
        }
    }
    return max_len;
}
// Time-complexity  : O(n log n)
// Space-complexity : O(n)

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << maxLen_OPTIMAL(arr, n);
}