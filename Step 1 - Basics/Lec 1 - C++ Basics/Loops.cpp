#include <bits/stdc++.h>
using namespace std;

void forloop() {
    cout << "FOR LOOP..." << endl;
    int i;
    for (i = 1; i <= 10; i++) {
        cout << "Striver : i=" << i << endl;
    }
    cout << "For loop truncates : i=" << i;
}

void whileloop() {
    cout << "WHILE LOOP..." << endl;
    int i = 1;
    while (i <= 10) {
        cout << "Striver : i=" << i << endl;
        i++;
    }
}

void dowhileloop() {
    cout << "DO WHILE LOOP..." << endl;
    int i = 1;
    do {
        cout << "Striver : i=" << i << endl;
        i++;
    } while (i <= 10);
}

int main() {
    dowhileloop();
    return 0;
}