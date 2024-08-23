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

    // making b-array smaller, since visitor-array works on b-array,
    // to make space-complexity lesser
    if (b.size() > a.size()) {
        b.swap(a);
    }

    vector<int> ans;
    vector<int> vis(n2); // stores '1' if an element is already visited
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j] && vis[j] == 0) {
                ans.push_back(a[i]);
                vis[j] = 1;
                break; // breaks out of j-loop
                       // no need for further traversal
            }
            // since input-arrays are sorted, so if
            // b[j] > a[i], then no need for further traversal
            // as the same-element will not be found in b-array
            if (b[j] > a[i])
                break;
        }
    }

    for (auto element : ans) {
        cout << element << " ";
    }
}

// Time-complexity  : O(n1*n2)
// Space-complexity : O(n2)