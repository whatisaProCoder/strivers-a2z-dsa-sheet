#include <bits/stdc++.h>
using namespace std;

// Check if a string is palindrome or not

string s;

bool fun(int i) {
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1]) {
        return false;
    }
    return fun(i + 1);
}

int main() {
    cin >> s;
    if (fun(0)) {
        cout << "palindrome";
    } else {
        cout << "not palindrome";
    }
}