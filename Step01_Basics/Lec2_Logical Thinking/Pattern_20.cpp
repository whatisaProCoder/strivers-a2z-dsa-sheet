#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int space = 2 * (n - 1);
    int stars;
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i > n)
            stars = 2 * n - i;
        else
            stars = i;
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        if (i < n)
            space -= 2;
        else
            space += 2;
        cout << endl;
    }
}