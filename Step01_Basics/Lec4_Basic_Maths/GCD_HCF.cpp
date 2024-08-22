#include <bits/stdc++.h>
using namespace std;

void bruteforceAlgorithm(int N1, int N2) {
    int minN = min(N1, N2);
    int gcd;
    for (int i = minN; i >= 1; i--) {
        if (N1 % i == 0 && N2 % i == 0) {
            gcd = i;
            break;
        }
    }
    cout << gcd << endl;
}

// EuclideanAlgorithm
// Time Complexity: O(log(min(a,b)))
void EuclideanAlgorithm(int a, int b) {
    int gcd;
    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        gcd = b;
    else
        gcd = a;
    cout << gcd;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;
    bruteforceAlgorithm(N1, N2);
    EuclideanAlgorithm(N1, N2);
}