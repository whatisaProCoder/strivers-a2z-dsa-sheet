#include <bits/stdc++.h>
using namespace std;

// Count subarrays with given sum

// Time-complexity  : O(n^3)
// Space-complexity : O(1)
int subarraySum_BRUTE(vector<int> &nums, int k) {
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum = sum + nums[k];
            }
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

// Time-complexity  : O(n^2)
// Space-complexity : O(1)
int subarraySum_BETTER(vector<int> &nums, int k) {
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum = sum + nums[j];
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

// Time-complexity  : O(n log n)
// Space-complexity : O(n)
int subarraySum_OPTIMAL(vector<int> &nums, int k) {
    int n = nums.size();
    map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        preSum += nums[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum]++;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << subarraySum_OPTIMAL(nums, k);
}