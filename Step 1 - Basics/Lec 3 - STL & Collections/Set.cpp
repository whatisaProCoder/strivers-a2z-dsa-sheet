#include <bits/stdc++.h>
using namespace std;

int main() {
    // Set: stores everything in sorted order
    //      stores unique elements only
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}
    st.insert(5);  // {1,2,3,4,5}

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as vector

    // {1,2,3,4}
    auto it = st.find(3); // returns an iterator
    auto it = st.find(6); // returns st.end() if element not present

    st.erase(5); // erases 5, takes O(log n) time

    int cnt = st.count(1); // exists? returns 1, else returns 0

    auto it1 = st.find(5);
    st.erase(it1); // takes iterator as parameter too; it takes const. time

    auto itx = st.find(2);
    auto ity = st.find(4);
    st.erase(itx, ity); // {1,4,5} => range of erase : [first,last)

    // lower_bound() and upper_bound() functions works in the same way
    // as in vectors
    auto iter1 = st.lower_bound(2);
    auto iter2 = st.upper_bound(3);
    // will learn later, maybe in binary search

    // everything takes O(log n) complexity
}