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

void merge_OPTIMAL1(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m) {
        if (nums1[left] > nums2[right]) {
            swap(nums1[left], nums2[right]);
            left--;
            right++;
        } else
            break;
    }
    sort(nums1.begin(), nums1.begin() + n);
    sort(nums2.begin(), nums2.begin() + m);
}
// Time-complexity  : O(min(n, m)) + O(n log n) + O(m log m)
// Space-complexity : O(1)

// Gap Method, Shell Sorting Algorithm
void swap_if_greater(vector<int>& nums1, vector<int>& nums2, int ind1,
                     int ind2) {
    if (nums1[ind1] > nums2[ind2]) swap(nums1[ind1], nums2[ind2]);
}
void merge_OPTIMAL2(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    int len = n + m;
    int gap = (len / 2) + (len % 2);
    while (gap > 0) {
        int left = 0;
        int right = left + gap;
        while (right < len) {
            // left's in nums1 and right's in nums2
            if (left < n && right >= n) {
                swap_if_greater(nums1, nums2, left, right - n);
            }
            // left and right, both are in nums2
            else if (left >= n) {
                swap_if_greater(nums2, nums2, left - n, right - n);
            }
            // left and right, both are in nums1
            else {
                swap_if_greater(nums1, nums1, left, right);
            }
            left++;
            right++;
        }
        if (gap == 1)
            break;
        else
            gap = (gap / 2) + (gap % 2);
    }
}
// Time-complexity  : O(log_2(n + m)) + O(n + m)
// Space-complexity : O(1)

int main() {
    int n;
    cin >> n;
    vector<int> nums1(n);
    for (int i = 0; i < n; i++) cin >> nums1[i];
    int m;
    cin >> m;
    vector<int> nums2(m);
    for (int i = 0; i < m; i++) cin >> nums2[i];

    merge_OPTIMAL2(nums1, n, nums2, m);

    for (int ele : nums1) cout << ele << " ";
    for (int ele : nums2) cout << ele << " ";
}