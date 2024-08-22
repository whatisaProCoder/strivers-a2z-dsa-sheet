#include <bits/stdc++.h>
using namespace std;

// Character Hashing
// say: array only has lowercase letters

int main() {
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    // int hash[256]={0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
        // hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch
        cout << "\'" << c << "\'"
             << " appears " << hash[c - 'a'] // hash[c]
             << " times" << endl;
    }
}