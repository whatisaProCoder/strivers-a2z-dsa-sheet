#include <bits/stdc++.h>
using namespace std;

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
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    merge_sort(arr, 0, n - 1);
    for (auto element : arr) {
        cout << element << " ";
    }
}

// Time-complexity:  O(n log n)
// Space-complexity: O(n)