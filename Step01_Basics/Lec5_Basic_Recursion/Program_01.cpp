#include <bits/stdc++.h>
using namespace std;

// Print name N times

string name;
void f(int i, int n) {
    // base case
    if (i > n)
        return;
    cout << name << endl;
    f(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    cin >> name;
    f(1, n);
}