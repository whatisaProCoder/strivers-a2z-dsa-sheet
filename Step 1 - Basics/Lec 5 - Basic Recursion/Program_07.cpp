#include <bits/stdc++.h>
using namespace std;

// Factorial of N

int fact(int n) {
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << fact(N);
}

// Time-complexity : O(n)
// Auxiliary-space : O(n)