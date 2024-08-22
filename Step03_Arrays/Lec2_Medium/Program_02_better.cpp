#include <bits/stdc++.h>
using namespace std;

// Sort an array of 0's 1's and 2's
// Better : Use counter variables

void sort_array(vector<int> &nums) {
    int n = nums.size();
    int count0, count1, count2;
    count0 = count1 = count2 = 0;

    for (auto element : nums) {
        if (element == 0)
            count0++;
        else if (element == 1)
            count1++;
        else
            count2++;
    }

    for (int i = 0; i < count0; i++) {
        nums[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++) {
        nums[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++) {
        nums[i] = 2;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort_array(nums);
    for (auto element : nums) {
        cout << element << " ";
    }
}

// Time-complexity  : O(2N)
// Space-complexity : O(1)