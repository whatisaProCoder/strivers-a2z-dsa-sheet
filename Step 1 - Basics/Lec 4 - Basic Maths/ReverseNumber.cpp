#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int lastdigit;
    int reverseNum = 0;
    while (num > 0) {
        lastdigit = num % 10;
        reverseNum = reverseNum * 10 + lastdigit;
        num = num / 10;
    }
    cout << reverseNum;
}