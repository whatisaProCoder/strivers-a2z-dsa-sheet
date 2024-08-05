#include <bits/stdc++.h>
using namespace std;

// FOR ASCENDING ORDER SORTING //

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    // one element is sorted, so i < j
    while (i < j) {
        // find out the first element
        // greater than arr[pivot]
        // from front
        while (arr[i] <= pivot && i <= high - 1) {
            // arr[i] <= arr[pivotIndex]
            // to keep everything smaller than/equal to
            // arr[pivotIndex] on the left of pivot

            // i <= high-1 [IMP]
            // since i++ might exceed high
            i++;
        }

        // find out the first element
        // smaller than arr[pivot]
        // from rear
        while (arr[j] > pivot && j >= low + 1) {
            // arr[i] > arr[pivotIndex]
            // to keep everything greater than
            // arr[pivotIndex] on the right of pivot

            // j >= low+1 [IMP]
            // since j-- might exceed low
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }

    // j reaches the correct place
    // of pivot, after while(i < j)
    // becomes false
    swap(arr[low], arr[j]);

    // return j, which is the partitionIndex
    return j;
}

// Divide & Conquer -> Algorithm
// doesn't take extra array for sorting
void qs(vector<int> &arr, int low, int high) {
    // one element is sorted, so low < high
    if (low < high) {
        // please find out the pivot
        // place it at its correct place
        // and tell me where you placed it
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    arr = quickSort(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

// Time-complexity:  O(N log N)
// Space-complexity: O(1) + O(N) [auxiliary stack space]