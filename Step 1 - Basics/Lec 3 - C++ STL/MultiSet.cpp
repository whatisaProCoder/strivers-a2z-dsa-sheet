#include <bits/stdc++.h>
using namespace std;

int main() {
    // everything is same as set
    // stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); // returns counts of element

    ms.erase(ms.find(1)); // only the first '1' is erased

    auto it = ms.find(1);     // points to address of 1
    advance(it, 2);           // advances address pointed by 2 elements
    ms.erase(ms.find(1), it); // erases elements from 1 to it:address

    // rest all functions same as set
}