#include <bits/stdc++.h>
using namespace std;

/*
Write a program that takes an input of age
and prints if you are adult of not.
    Adult : if age>=18
*/

void problem1() {
    int age;
    cin >> age;
    if (age >= 18)
        cout << "You are an adult." << endl;
    else
        cout << "You are not an adult." << endl;
}

/*
If marks are less than 25, it prints "Grade: F."
If marks are between 25 and 44 (inclusive), it prints "Grade: E."
If marks are between 45 and 49 (inclusive), it prints "Grade: D."
If marks are between 50 and 59 (inclusive), it prints "Grade: C."
If marks are between 60 and 69 (inclusive), it prints "Grade: B."
If marks are 70 or higher, it prints "Grade: A."
If marks are outside the valid range, it prints "Invalid marks entered."
*/

void problem2() {
    int marks;
    cin >> marks;
    if (marks < 25)
        cout << "Grade: F";
    else if (marks <= 44)
        cout << "Grade: E";
    else if (marks <= 49)
        cout << "Grade: D";
    else if (marks <= 59)
        cout << "Grade: C";
    else if (marks <= 69)
        cout << "Grade: B";
    else if (marks <= 100)
        cout << "Grade: A";
    else
        cout << "Invalid marks entered.";
}

/*
Take the age from the user and then decide accordingly:
1.  If age<18,
    print-> "not eligible for job"
2.  If age>=18 and age<54,
    print-> "eligible for job"
3.  If age>=55 and age<=57,
    print-> "eligible for job, but retirement soon"
4.  If age>57,
    print-> "retirement time"
*/

void problem3() {
    int age;
    cin >> age;
    if (age < 18)
        cout << "Not eligible for job";
    else if (age <= 57) {
        cout << "Eligible for job";
        if (age >= 55)
            cout << ", but retirement soon.";
    } else
        cout << "Retirement time";
}

int main() {
    problem3();
    return 0;
}