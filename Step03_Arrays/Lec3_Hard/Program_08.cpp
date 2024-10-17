#include <bits/stdc++.h>
using namespace std;

// Merge two sorted arrays without extra space

void merge_BRUTE(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    vector<int> nums3;
    int left = 0;
    int right = 0;
    while (left < n && right < m) {
        if (nums1[left] <= nums2[right])
            nums3.push_back(nums1[left++]);
        else
            nums3.push_back(nums2[right++]);
    }
    while (left < n) nums3.push_back(nums1[left++]);
    while (right < m) nums3.push_back(nums2[right++]);
    for (int i = 0; i < n + m; i++) {
        if (i < n)
            nums1[i] = nums3[i];
        else
            nums2[i - n] = nums3[i];
    }
}
// Time-complexity  : O(n + m) + O(n + m)
// Space-complexity : O(n + m)

int main() {
    int n;
    cin >> n;
    vector<int> nums1(n);
    for (int i = 0; i < n; i++) cin >> nums1[i];
    int m;
    cin >> m;
    vector<int> nums2(m);
    for (int i = 0; i < m; i++) cin >> nums2[i];

    merge_BRUTE(nums1, n, nums2, m);

    for (int ele : nums1) cout << ele << " ";
    for (int ele : nums2) cout << ele << " ";
}