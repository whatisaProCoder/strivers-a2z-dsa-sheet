#include <bits/stdc++.h>
using namespace std;

// Find the union of two sorted arrays.
// 2-pointer approach

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> a(n1);
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    cin >> n2;
    vector<int> b(n2);
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    vector<int> unionArr;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    for (auto element : unionArr) {
        cout << element << " ";
    }
}

// Time-complexity:  O(n1+n2)
// Space-complexity: O(n1+n2) for returning the unionArr