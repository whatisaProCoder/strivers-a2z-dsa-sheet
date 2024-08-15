#include <bits/stdc++.h>
using namespace std;

// Sort an array of 0's 1's and 2's
// Brute : Use Merge-Sort

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
        // low - low = 0,
        // low + 1 - low = 1,
        // low + 2 - low = 2, etc.
    }
}

// Divide & Merge!
// pass low = 0 & high = n-1
void merge_sort(vector<int> &arr, int low, int high) {
    // base case
    if (low >= high)
        return;
    // processing
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    merge_sort(nums, 0, n - 1);
    for (auto element : nums) {
        cout << element << " ";
    }
}

// Time-complexity  : O(N log N)
// Space-complexity : O(N)