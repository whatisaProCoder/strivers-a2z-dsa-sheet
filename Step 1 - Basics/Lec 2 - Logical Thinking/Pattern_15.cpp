#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    char ch;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch;
        }
        cout << endl;
    }
}