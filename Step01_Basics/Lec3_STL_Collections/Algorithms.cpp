#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // if they are same
    if (p1.first > p2.first)
        return true;
    // if p1.first < p2.first
    return false;
}

int main() {
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(5);
    v.emplace_back(8);
    v.emplace_back(2);
    v.emplace_back(3);
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Sorting vector<int> v in ascending order..." << endl;
    sort(v.begin(), v.end());
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Sorting vector<int> v in descending order..." << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto element : v) {
        cout << element << " ";
    }
    cout << endl;
    int maxele = *max_element(v.begin(), v.end()); // returns address
    cout << "Max element in 'v' : " << maxele << endl;
    int minele = *min_element(v.begin(), v.end()); // returns address
    cout << "Min element in 'v' : " << minele << endl;

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int len = sizeof(a) / sizeof(a[0]);
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending order
    cout << "Sorting pair<int,int> a[] in my order..." << endl;
    sort(a, a + len, comp);
    for (auto element : a) {
        cout << element.first << ", " << element.second << endl;
    }
    cout << endl;

    int num = 7;
    int cntBinary1 = __builtin_popcount(num); // returns no. of '1' in binary of num
    cout << "__builtin_popcount(num)    : " << cntBinary1 << endl;

    long long numx = 27737372392;
    int cntBinary1x = __builtin_popcountll(numx);
    cout << "__builtin_popcountll(numx) : " << cntBinary1x << endl;
    cout << endl;

    string str = "123"; // must be sorted for getting all permutations
    cout << "All permutations of str..." << endl;
    do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    string strx = "231"; // not sorted, so not getting all permutations
    cout << "All permutations of strx (not sorted)..." << endl;
    do {
        cout << strx << endl;
    } while (next_permutation(strx.begin(), strx.end()));
    sort(strx.begin(), strx.end());
    cout << "All permutations of strx (sorted)..." << endl;
    do {
        cout << strx << endl;
    } while (next_permutation(strx.begin(), strx.end()));
}