#include <bits/stdc++.h>
using namespace std;

// Majority Element (n/3 times)

vector<int> majorityElement_BRUTE(vector<int> &nums) { return {}; }

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (auto ele : majorityElement_BRUTE(nums)) {
        cout << ele << " ";
    }
}