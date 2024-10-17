#include <bits/stdc++.h>
using namespace std;

// Find the repeating and missing number

vector<int> findTwoElement_BRUTE(vector<int>& arr) {
    int n = arr.size();
    int repeating = -1;
    int missing = -1;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int number : arr) {
            if (number == i) cnt++;
        }
        if (cnt == 2)
            repeating = i;
        else if (cnt == 0)
            missing = i;
        if (repeating != -1 && missing != -1) break;
    }
    return {repeating, missing};
}
// Time-complexity  : O(n^2)
// Space-complexity : O(1)

vector<int> findTwoElement_BETTER(vector<int>& arr) {
    int n = arr.size();
    int hash_arr[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        hash_arr[arr[i]]++;
    }
    int repeating = -1;
    int missing = -1;
    for (int i = 1; i <= n; i++) {
        if (hash_arr[i] == 2)
            repeating = i;
        else if (hash_arr[i] == 0)
            missing = i;
        if (repeating != -1 && missing != -1) break;
    }
    return {repeating, missing};
}
// Time-complexity  : O(2n)
// Space-complexity : O(n)

// Using basic mathematics
vector<int> findTwoElement_OPTIMAL1(vector<int>& arr) {
    long long n = arr.size();
    // s - sn = x - y [x -> repeating, y -> missing]
    // s^2 - sn^2 = x^2 - y^2
    long long sn = (n * (n + 1)) / 2;
    long long sn2 = (n * (n + 1) * (2 * n + 1)) / 6;
    long long s = 0;
    long long s2 = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
        s2 += (long long)arr[i] * (long long)arr[i];
    }
    long long x_minus_y = s - sn;
    long long x2_minus_y2 = s2 - sn2;
    long long x_plus_y = x2_minus_y2 / x_minus_y;
    long long repeating = (x_plus_y + x_minus_y) / 2;
    long long missing = (x_plus_y - x_minus_y) / 2;
    return {(int)repeating, (int)missing};
}
// Time-complexity  : O(n)
// Space-complexity : O(1)

// Using XOR
vector<int> findTwoElement_OPTIMAL2(vector<int>& arr) {
    int n = arr.size();
    int xr = 0;
    for (int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        xr = xr ^ (i + 1);
    }
    int bit_no = 0;
    while (true) {
        if ((xr & (1 << bit_no)) != 0) break;
        bit_no++;
    }
    int zero_club = 0;
    int one_club = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] & (1 << bit_no)) != 0)
            // part of one_club
            one_club = one_club ^ arr[i];
        else
            // part of zero_club
            zero_club = zero_club ^ arr[i];
    }
    for (int i = 1; i <= n; i++) {
        if ((i & (1 << bit_no)) != 0)
            // part of one_club
            one_club = one_club ^ i;
        else
            // part of zero_club
            zero_club = zero_club ^ i;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == zero_club) cnt++;
    if (cnt == 2)
        // {repeating number, missing number}
        return {zero_club, one_club};
    else
        return {one_club, zero_club};
}
// Time-complexity  : O(4n) => O(n)
// Space-complexity : O(1)

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int element : findTwoElement_OPTIMAL2(arr)) cout << element << " ";
}