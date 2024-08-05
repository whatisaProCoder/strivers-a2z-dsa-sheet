#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int leftDistance = j;
            int rightDistance = (2 * n - 1) - 1 - j;
            int topDistance = i;
            int downDistance = (2 * n - 1) - 1 - i;
            int val = n - min(min(leftDistance, rightDistance),
                              min(topDistance, downDistance));
            cout << val << " ";
        }
        cout << endl;
    }
}