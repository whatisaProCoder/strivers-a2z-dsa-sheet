#include <bits/stdc++.h>
using namespace std;

// Reverse an array

// global declaration
int n;
int *a; // pointer to arr[]

void f(int l, int r) {
    if (l >= r)
        return;
    swap(a[l], a[r]);
    f(l + 1, r - 1);
}

void f(int i) {
    if (i >= n / 2) // return if 'i' reaches middle element
        return;
    swap(a[i], a[n - i - 1]);
    f(i + 1);
}

int main() {
    int arr[] = {12, 24, 36, 48, 60, 72};
    n = 6;   // initialising global n
    a = arr; // giving f() access to arr through pointer 'a'

    for (auto element : arr) {
        cout << element << " ";
    }
    cout << endl;

    f(0, n - 1);
    for (auto element : arr) {
        cout << element << " ";
    }
    cout << endl;

    f(0);
    for (auto element : arr) {
        cout << element << " ";
    }
    cout << endl;
}