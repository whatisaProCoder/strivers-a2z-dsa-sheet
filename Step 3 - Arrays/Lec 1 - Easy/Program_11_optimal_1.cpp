#include <bits/stdc++.h>
using namespace std;

// Find missing number in an array.
// Using sum-concept.

int missingNum(vector<int> arr) {
    int n = arr.size();
    int sum_total = n * (n + 1) / 2;
    int sum_arr = 0;
    for (auto element : arr) {
        sum_arr += element;
    }
    return sum_total - sum_arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Missing number : " << missingNum(arr);
}

// Time-complexity  : O(N)
// Space-complexity : O(1)

// n*(n+1)/2 will overflow for int = 10^5
// requires long, but takes more storage
// so, XOR-concept slightly better in space-complexity