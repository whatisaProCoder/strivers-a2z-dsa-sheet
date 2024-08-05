#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    int temp;
    int sum = 0, cntDigits = 0;

    temp = num;
    while (temp > 0) {
        cntDigits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        sum = sum + pow(temp % 10, cntDigits);
        temp /= 10;
    }

    if (num == sum)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
}