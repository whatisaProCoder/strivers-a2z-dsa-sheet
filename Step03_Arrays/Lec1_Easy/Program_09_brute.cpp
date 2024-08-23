#include <bits/stdc++.h>
using namespace std;

// Find the union of two sorted arrays

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    set<int> st;                // extra space taken
    for (auto element : arr1) { // O(n1 log n); n = size of set
        st.insert(element);
    }
    for (auto element : arr2) { // O(n2 log n); n = size of set
        st.insert(element);
    }

    vector<int> _union_;      // extra space taken
    for (auto element : st) { // O(n1 + n2)
        _union_.push_back(element);
    }

    for (auto element : _union_) {
        cout << element << " ";
    }
}

// Time-complexity  : O(n1 log n) + O(n2 log n) + O(n1+n2)
// Space-complexity : O(n1 + n2) + O(n1 + n2)