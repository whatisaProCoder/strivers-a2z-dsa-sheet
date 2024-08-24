#include <bits/stdc++.h>
using namespace std;

// Find missing number in an array

int missingNumber(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i <= n; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
    return INT_MIN; // making the compiler happy
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Missing number : " << missingNumber(arr);
}

// Time-complexity : O(N^2)