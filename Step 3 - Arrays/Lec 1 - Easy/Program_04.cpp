#include <bits/stdc++.h>
using namespace std;

// Remove duplicates from Sorted array

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    /*
    for (auto element : arr)
        cout << element << endl;
    */

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            // inserting non-duplicate element at i = 1
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << "After processing..." << endl;
    cout << "Size  : " << i + 1 << endl;
    cout << "Array : ";
    for (int j = 0; j < i + 1; j++) {
        cout << arr[j] << " ";
    }
}