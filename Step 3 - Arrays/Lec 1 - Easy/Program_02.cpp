#include <bits/stdc++.h>
using namespace std;

// Second Largest Element in an Array without sorting
// only for non-negative numbers

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // processing
    int largest = arr[0];
    int slargest = -1; // second largest
                       // slargest=INT_MIN
                       // if array has negative numbers too
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }

    // in case if no second largest number is available
    // slargest contains -1 (for slargest=-1 as initialization), or
    // slargest contains INT_MIN (for slargest=INT_MIN as initialization)

    cout << "The second largest element : " << slargest;
}