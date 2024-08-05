#include <bits/stdc++.h>
using namespace std;

int main() {
    // map stores unique keys in sorted order
    // complexity: O(log n)
    // map<unique key,value>
    map<int, int> map1;
    map<int, pair<int, int>> map2;
    map<pair<int, int>, int> map3;

    map1[1] = 2;         // {key,value} => {1,2}
    map1.emplace(3, 1);  // {key,value} => {3,1}
    map1.insert({2, 4}); // {key,value} => {2,4}

    map3[{2, 3}] = 10; // {key,value} => {{2,3},10}

    cout << "Printing map1..." << endl;
    for (auto it : map1) {
        cout << it.first << ", " << it.second << endl;
    }

    cout << "map1[1]=" << map1[1] << endl;
    cout << "map1[5]=" << map1[5] << endl; // prints 0

    auto it = map1.find(3);
    cout << "it = map1.find(3), then it : ";
    cout << it->first << ", " << it->second << endl;

    auto it1 = map1.find(5); // returns map1.end()

    // multimap
    // complexity: O(log n)
    // everything same as map, but it can store duplicate keys
    // map[key] cannot be used here
    // stored in sorted order
    // {{1,2},{1,3},{2,2},{2,3}}

    // unorderedmap
    // complexity: O(1), worse case: O(n) [very rare]
    // only thing is map is not sorted
}