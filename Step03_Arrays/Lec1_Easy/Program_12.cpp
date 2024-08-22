#include <bits/stdc++.h>
using namespace std;

// Maximum Consecutive Ones.
// Input  : 1 1 0 1 1 1 1 0 1
// Output : 4

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ones = 0;
    int max_ones = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            ones++;
            max_ones = max(max_ones, ones);
        } else {
            ones = 0;
        }
    }

    cout << "Maximum consecutive ones : " << max_ones;
}

// Time-complexity  : O(N)
// Space-complexity : O(1)