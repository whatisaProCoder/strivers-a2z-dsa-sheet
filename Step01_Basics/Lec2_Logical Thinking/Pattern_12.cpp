#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n, space;
    cin >> n;
    space = 2 * (n - 1);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        for (j = 1; j <= space; j++) {
            cout << " ";
        }
        for (j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}