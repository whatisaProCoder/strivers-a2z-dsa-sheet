#include <bits/stdc++.h>
using namespace std;

// Kadane's Algorithm, maximum subarray sum
// Optimal : Using only one for-loop

int max_subarray_sum(vector<int> nums) {
    int n = nums.size();
    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (sum > max_sum) {
            max_sum = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    // if question only requires max_sum >= 0,
    // then init max_sum = 0 for negative-value
    /*
    if (max_sum < 0) {
        max_sum = 0;
    }
    */

    return max_sum;
}

vector<int> get_max_subarray_sum(vector<int> nums) {
    int n = nums.size();
    int sum = 0;
    int max_sum = INT_MIN;

    int start;
    int ans_start = -1;
    int ans_end = -1;

    for (int i = 0; i < n; i++) {
        if (sum == 0) start = i;

        sum += nums[i];

        if (sum > max_sum) {
            max_sum = sum;
            ans_start = start;
            ans_end = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    vector<int> ans;
    for (int i = ans_start; i <= ans_end; i++) {
        ans.push_back(nums[i]);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum subarray sum = " << max_subarray_sum(nums) << endl;

    cout << endl
         << "Required subarray..." << endl;
    for (auto element : get_max_subarray_sum(nums)) {
        cout << element << " ";
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)