#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> st;
    // lower_bound and upper_bound function
    // do not work, rest all functions are same
    // as above, it does not store in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
    // stores unique elements in random order
    // Complexity: O(1)
    // Worst case, once in million times, complexity: O(n)
}