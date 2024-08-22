#include <bits/stdc++.h>
using namespace std;

void SArray() { // 1D Array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[4] -= 1;
    cout << arr[3] << endl;
    cout << arr[4];
}

void DArray() { // 2D Array
    int arr[3][5];
    arr[1][3] = 78;
    cout << arr[1][3];
}

void String() {
    string s = "Striver";
    int len = s.size();
    cout << "Length: " << len << endl;
    cout << s[len - 1];
}

int main() {
    String();
    return 0;
}