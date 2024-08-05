#include <bits/stdc++.h>
using namespace std;

// Print linearly from N to 1

void f(int i, int N) {
    if (i < 1) // i lesser than 1, then return
        return;
    cout << i << endl;
    f(i - 1, N);
}

int main() {
    int N;
    cin >> N;
    f(N, N);
}