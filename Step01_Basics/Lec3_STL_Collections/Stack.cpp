#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top() << endl;

    st.pop(); // {3,3,2,1}

    cout << st.top() << endl;   // prints 3
    cout << st.size() << endl;  // prints 4
    cout << st.empty() << endl; // prints 1 (false), 0 (true)

    stack<int> stx;
    stx.swap(st); // swaps contents of st and stx
}