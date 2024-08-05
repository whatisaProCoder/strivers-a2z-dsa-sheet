#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << "Brute-force Approach..." << endl;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0)
            cout << i << endl;
    }

    cout << "Optimal Approach..." << endl;
    set<int> factors;
    for (int i = 1; i * i <= N; i++) { // i : 1 to sqrt(N)
        if (N % i == 0) {
            factors.insert(i);
            factors.insert(N / i);
        }
    }
    for (auto element : factors) {
        cout << element << endl;
    }
}