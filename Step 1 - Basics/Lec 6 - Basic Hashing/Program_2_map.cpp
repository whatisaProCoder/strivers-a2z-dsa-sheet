#include <bits/stdc++.h>
using namespace std;

// Character Hashing using map

int main() {
    string s;
    cin >> s;

    // precompute
    map<char, int> mpp;
    // {character,value}
    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch
        cout << "\'" << c << "\'"
             << " appears " << mpp[c]
             << " times" << endl;
    }
}