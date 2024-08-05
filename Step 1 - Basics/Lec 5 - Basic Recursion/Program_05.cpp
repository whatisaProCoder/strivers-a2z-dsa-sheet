#include <bits/stdc++.h>
using namespace std;

// Print from N to 1 using backtracking

void f(int i, int N) {
    if (i < 1)
        return;
    cout << i << endl; // imp-line
    f(i - 1, N);
}

int main() {
    int N;
    cin >> N;
    f(N, N);
}