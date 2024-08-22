#include <bits/stdc++.h>
using namespace std;

// Find the intersection of two sorted arrays.
// 2-pointer approach
// Repetition of elements in final array is allowed.

int main() {
    int n1, n2;
    cin >> n1; // size of a-array
    vector<int> a(n1);
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    cin >> n2; // size of b-array
    vector<int> b(n2);
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for (auto element : ans) {
        cout << element << " ";
    }
}

// Time-complexity:  O(n1+n2)
// Space-complexity: O(n1+n2) [for returning the answer-array]
// Space-complexity: O(1)     [for processing, no extra space is used]