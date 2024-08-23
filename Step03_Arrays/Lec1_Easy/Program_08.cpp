#include <bits/stdc++.h>
using namespace std;

// Linear Search
// Return index of first occurrence

int search(vector<int> &arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num, n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> num;

    int index = search(arr, num);
    if (index != -1) {
        cout << "Found " << num << " at index = " << index;
    } else {
        cout << num << " is not found";
    }
}

// Time-complexity  : O(n)
// Space-complexity : O(1)