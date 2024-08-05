#include <bits/stdc++.h>
using namespace std;

// Sum of first N numbers

// parameterised
void f(int i, int sum) {
    if (i < 1) {
        cout << sum << endl;
        return;
    }
    f(i - 1, sum + i);
}

// functional
int f(int n) {
    if (n == 0)
        return 0;
    return n + f(n - 1);
}

int main() {
    int N;
    cin >> N;
    f(N, 0);
    cout << f(N);
}