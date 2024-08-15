#include <bits/stdc++.h>
using namespace std;

// Sort an array of 0's 1's and 2's
// Optimal : Dutch National Flag Algorithm

void sort_array(vector<int> &nums) {
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
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

// Time-complexity  : O(N)
// Space-complexity : O(1)