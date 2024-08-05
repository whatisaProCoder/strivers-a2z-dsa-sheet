#include <bits/stdc++.h>
using namespace std;

void bubble_sort_r(int arr[], int n) {
    if (n == 1)
        return;

    int didSwap = 0;
    // normally, for(int i = n - 1; i >= 0; i--) {
    //              for(int j = 0; j <= i- 1; j++)...
    //           }
    // but here:
    // j <= n - 2 to include i = n - 1 & j <= i - 1
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            didSwap = 1;
        }
    }

    if (didSwap == 0)
        return;

    bubble_sort_r(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort_r(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// Time Complexity: O(N2) for the worst and average cases
//                  O(N) for the best case.

// Here, N = size of the array.

// Space Complexity: O(N) auxiliary stack space.