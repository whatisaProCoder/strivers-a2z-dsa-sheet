#include <bits/stdc++.h>
using namespace std;

// Count number of subarrays with given xor K

int get_count_BRUTE(vector<int>& arr, int K) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int xor_val = 0;
            for (int k = i; k <= j; k++) {
                xor_val = xor_val ^ arr[k];
            }
            if (xor_val == K) cnt++;
        }
    }
    return cnt;
}
// Time-complexity  : O(n^3)
// Space-complexity : O(1)

int get_count_BETTER(vector<int>& arr, int K) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int xor_val = 0;
        for (int j = i; j < n; j++) {
            xor_val = xor_val ^ arr[j];
            if (xor_val == K) cnt++;
        }
    }
    return cnt;
}
// Time-complexity  : O(n^2)
// Space-complexity : O(1)

int get_count_OPTIMAL(vector<int>& arr, int K) {
    int n = arr.size();
    map<int, int> mpp;
    mpp[0] = 1;
    int cnt = 0;
    int xor_val = 0;
    for (int i = 0; i < n; i++) {
        xor_val = xor_val ^ arr[i];
        int xor_rem = xor_val ^ K;
        cnt += mpp[xor_rem];
        mpp[xor_val]++;
    }
    return cnt;
}
// Time-complexity  : O(n log n)
// Space-complexity : O(n)

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int K;
    cin >> K;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << get_count_OPTIMAL(arr, K);
}