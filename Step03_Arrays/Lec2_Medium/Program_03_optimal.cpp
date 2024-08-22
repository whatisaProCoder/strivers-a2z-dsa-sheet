#include <bits/stdc++.h>
using namespace std;

// Majority Element (>n/2 times)
// Optimal : Moore's Voting Algorithm

int majority_element(vector<int> nums) {
    int n = nums.size();
    int ele;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            ele = nums[i];
        } else if (nums[i] == ele) {
            cnt++;
        } else {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == ele)
            cnt1++;
    }
    if (cnt1 > n / 2) {
        return ele;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Majority Element = " << majority_element(nums);
}

// Time-complexity  : O(N) (algo) + O[N] (verification, if array
//                                       doesn't have a majority element)
// Space-complexity : O(1)