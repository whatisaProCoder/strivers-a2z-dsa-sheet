#include <bits/stdc++.h>
using namespace std;

// Longest subarray with given sum K (positives+zeroes+negatives)
// Contiguous part of the array is a subarray.
// Better : Using Hashing.
// For negatives, this is the optimal solution.

int max_subarray_len(vector<int> nums, int K) {
    int n = nums.size();
    map<int, int> preSumMap;
    // map<num, index>

    int sum = 0;
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (sum == K) {
            max_len = max(max_len, i + 1);
        }

        int rem = sum - K;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            max_len = max(max_len, len);
        }

        // edge case : for zeroes
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return max_len;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int K;
    cin >> K;

    cout << "Sum K = " << K << endl;
    cout << "Longest subarray length : " << max_subarray_len(nums, K);
}

// Time-complexity  : O(N log N)             [for ordered map]
//                    O(N x 1) to O(N ^ 2) [for unordered_map]
// Space-complexity : O(N)