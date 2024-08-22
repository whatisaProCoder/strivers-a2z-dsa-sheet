#include <bits/stdc++.h>
using namespace std;

// Fibonacci Number

int f(int n) {
    if (n <= 1)
        return n;
    return f(n - 1) + f(n - 2);
}

int main() {
    int N;
    cin >> N;
    cout << f(N);
}

// Time-complexity: O(2^n) - exponential in nature