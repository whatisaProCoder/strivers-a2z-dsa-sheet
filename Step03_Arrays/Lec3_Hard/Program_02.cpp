#include <bits/stdc++.h>
using namespace std;

// Majority Element (n/3 times)

vector<int> majorityElement_BRUTE(vector<int> &nums) {
    int n = nums.size();
    vector<int> ls;
    for (int i = 0; i < n; i++) {
        // if ls is empty or ls does not contain the current element: nums[i]
        if (ls.size() == 0 || find(ls.begin(), ls.end(), nums[i]) == ls.end()) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i])
                    cnt++;
            }
            if (cnt > n / 3)
                ls.push_back(nums[i]);
        }
    }
    return ls;
}
// Time-complexity  : O(n^2)
// Space-complexity : O(1)

vector<int> majorityElement_BETTER(vector<int> &nums) {
    int n = nums.size();
    int min_count = n / 3 + 1;
    vector<int> ls;
    map<int, int> mpp;
    for (auto ele : nums) {
        mpp[ele]++;
        if (mpp[ele] == min_count)
            ls.push_back(ele);
    }
    return ls;
}
// Time-complexity  : O(n log n)
// Space-complexity : O(n)

vector<int> majorityElement_OPTIMAL(vector<int> &nums) {
    int n = nums.size();
    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN, ele2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && nums[i] != ele2) {
            cnt1 = 1;
            ele1 = nums[i];
        } else if (cnt2 == 0 && nums[i] != ele1) {
            cnt2 = 1;
            ele2 = nums[i];
        } else if (ele1 == nums[i])
            cnt1++;
        else if (ele2 == nums[i])
            cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ls;
    cnt1 = 0;
    cnt2 = 0;
    for (auto ele : nums) {
        if (ele1 == ele)
            cnt1++;
        if (ele2 == ele)
            cnt2++;
    }
    int min_count = n / 3 + 1;
    if (cnt1 >= min_count)
        ls.push_back(ele1);
    if (cnt2 >= min_count)
        ls.push_back(ele2);
    return ls;
}
// Time-complexity  : O(2n) => O(n)
// Space-complexity : O(1)

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (auto ele : majorityElement_OPTIMAL(nums)) {
        cout << ele << " ";
    }
}