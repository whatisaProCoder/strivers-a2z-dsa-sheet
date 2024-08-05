#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    cout << count << endl;

    // another approach
    cin >> num;
    count = log10(num) + 1;
    cout << count;
}

// time-complexity: O(log10(N))