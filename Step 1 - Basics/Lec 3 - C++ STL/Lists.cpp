#include <bits/stdc++.h>
using namespace std;

int main() {
    // lists give us front-operations as well
    // insert() in vector is costly
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(4);

    ls.push_front(2);
    ls.emplace_front(1);

    // rest of the functions are similar to vector...
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()
}