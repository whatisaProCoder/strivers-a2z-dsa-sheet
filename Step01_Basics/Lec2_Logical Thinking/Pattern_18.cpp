#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char maxch = 'A' + n - 1;
    for (int i = 0; i < n; i++) {
        for (char ch = maxch - i; ch <= maxch; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}