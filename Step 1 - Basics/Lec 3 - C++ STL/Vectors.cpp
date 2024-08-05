#include <bits/stdc++.h>
using namespace std;

// check the documentation overlays

int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2); // faster function for inserting values

    vector<pair<int, int>> v2;
    v2.push_back({1, 2});  // push_back needs {}
    v2.emplace_back(3, 4); // assumes pairs, does not need {}

    vector<int> v3(5, 100); // 5 instances of '100' => {100,100,100,100,100}
                            // v3[0]=100,v3[1]=100,...,v3[4]=100

    vector<int> v4(5); // 5 instances of '0' => {0,0,0,0,0}
                       // v4[0]=0,v4[1]=0,...,v4[4]=0

    vector<int> v5(5, 20);                       // 5 instances of '20' => {20,20,20,20,20}
                                                 // v5[0]=20,v5[1]=20,...,v5[4]=20
    vector<int> v6(v5);                          // v6 becomes copy of v5
    cout << "Size of v6: " << v6.size() << endl; // size() or capacity()
    cout << endl;

    vector<int> v7;
    v7.emplace_back(1);                    // index=0
    v7.emplace_back(3);                    // index=1
    v7.emplace_back(5);                    // index=2
    v7.emplace_back(7);                    // index=3
    v7.emplace_back(9);                    // index=4
    vector<int>::iterator it = v7.begin(); // it: is kinda a pointer to
                                           // memory address of v7[0]
    cout << "v7[0] = " << *(it) << endl;
    it++; // it: points to next memory address
    cout << "v7[1] = " << *(it) << endl;
    it = it + 2; // it: points to next-next memory address
    cout << "v7[3] = " << *(it) << endl;
    vector<int>::iterator itx = v7.end();            // points to one past the last element
    vector<int>::reverse_iterator ity = v7.rend();   // points to one before the first element
    vector<int>::reverse_iterator itz = v7.rbegin(); // points to the last element,
                                                     // iterates in reverse
    cout << "v7[last] = " << v7.back() << endl;      // points to the last element
    cout << endl;
    cout << "Printing the vector [v7] thrice..." << endl;
    for (vector<int>::iterator it = v7.begin(); it != v7.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = v7.begin(); it != v7.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto element : v7) {
        cout << element << " ";
    }
    cout << endl;
    v7.erase(v7.begin() + 1);                 // deletes '3'
    v7.erase(v7.begin() + 2, v7.begin() + 4); // deletes '5','7'; not '9'
                                              // v7.erase(req. starting address,
                                              //         address after req. element)

    vector<int> v8(2, 100);                          // {100,100}
    v8.insert(v8.begin(), 300);                      // {300,100,100}
    v8.insert(v8.begin() + 1, 2, 10);                // {300,10,10,100,100}
    vector<int> copy(2, 50);                         // {50,50}
                                                     //'copy' is just a name of vector
    v8.insert(v8.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
    v8.pop_back();                                   // pops out last element
    v8.swap(v7);                                     // contents of v8 and v7 get swapped
    v8.clear();                                      // erases the entire vector,
                                                     // leaving empty container
    cout << "v8.empty() => " << v8.empty();          // returns 1 (false), 0 (true)
}