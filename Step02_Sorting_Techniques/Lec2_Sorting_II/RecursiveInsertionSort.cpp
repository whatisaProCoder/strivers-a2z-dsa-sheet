#include <bits/stdc++.h>
using namespace std;

void insertion_sort_r(int arr[], int i, int n) {
    // Base Case: i == n
    if (i == n)
        return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertion_sort_r(arr, i + 1, n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insertion_sort_r(arr, 0, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Time Complexity: O(N2) for average, worst cases
//                  O(N) for best case, i.e., sorted array

// Here, N = size of the array.

// Space Complexity: O(N) auxiliary stack space.