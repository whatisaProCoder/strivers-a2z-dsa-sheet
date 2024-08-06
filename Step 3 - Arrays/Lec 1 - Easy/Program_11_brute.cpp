#include <bits/stdc++.h>
using namespace std;

// Find missing number in an array

int missingNum(vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number : " << missingNum(arr);
}

// Time-complexity: O(N^2)