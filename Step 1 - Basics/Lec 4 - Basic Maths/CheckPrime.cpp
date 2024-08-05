#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (N / i != i)
                count++;
        }
    }

    if (count == 2)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";
}