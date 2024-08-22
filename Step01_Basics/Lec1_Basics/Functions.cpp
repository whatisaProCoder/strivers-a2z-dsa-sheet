#include <bits/stdc++.h>
using namespace std;

void printName(string name) {
    cout << "Hey, " << name << "!" << endl;
}

void prog1() {
    string name;
    cin >> name;
    printName(name);
}

// Take two numbers and print its sum.
void sum(int a, int b) {
    int sum = a + b;
    cout << a << "+" << b << "=" << sum << endl;
}

void prog2() {
    int a, b;
    cin >> a >> b;
    sum(a, b);
    cout << "Max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;
}

// pass by value
void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by reference
void doSomethingX(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void prog3() {
    int num = 10;
    doSomething(num);
    cout << "After pass by value:     num=" << num << endl;
    doSomethingX(num);
    cout << "After pass by reference: num=" << num << endl;
}

// int arr[], etc. are passed by reference by default.

int main() {
    prog3();
    return 0;
}