#include <bits/stdc++.h>
using namespace std;

int main() {
    // Maximum Heap or Maximum Priority Queue
    // the largest element stays at the top
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top() << endl; // prints 10

    pq.pop(); // {8,5,2}

    cout << pq.top() << endl; // prints 8

    // size(), swap() and empty() function same as others

    // Minimum Heap or Minimum Priority Queue
    // the smallest element stays at the top
    priority_queue<int, vector<int>, greater<int>> pqx;
    pqx.push(5);     // {5}
    pqx.push(2);     // {2,5}
    pqx.push(8);     // {2,5,8}
    pqx.emplace(10); // {2,5,8,10}

    cout << pqx.top(); // prints 2

    // push() => O(log n)
    // top()  => O(1)
    // pop()  => O(log n)
}