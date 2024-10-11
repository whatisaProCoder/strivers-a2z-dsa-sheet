#include <bits/stdc++.h>
using namespace std;

// Pascal's Triangle

// Given R & C, find the element at that place
// Example: R = 5, C = 3 => returns 6
int NCR(int n, int r) {
    int res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
// Time-complexity  : O(r)
// Space-complexity : O(1)
int element_at(int R, int C) { return NCR(R - 1, C - 1); }

// Print the N-th row of Pascal's Triangle
// Example: N = 5 => prints: 1 4 6 4 1
void print_row_EXBRUTE(int N) {
    for (int C = 1; C <= N; C++) {
        cout << NCR(N - 1, C - 1) << " ";
    }
}
// Time-complexity  : O(N * r)
// Space-complexity : O(1)
void print_row_OPTIMAL(int N) {
    long long ans = 1;
    cout << ans << " ";
    for (int i = 1; i < N; i++) {
        ans = ans * (N - i);
        ans = ans / i;
        cout << ans << " ";
    }
}
// Time-complexity  : O(N)
// Space-complexity : O(1)

// Print the entire Pascal's Triangle till N-th row
vector<vector<int>> generate_BRUTE(int numRows) {
    vector<vector<int>> ans;
    for (int row = 1; row <= numRows; row++) {
        vector<int> rowList;
        for (int col = 1; col <= row; col++) {
            rowList.push_back(element_at(row, col));
        }
        ans.push_back(rowList);
    }
    return ans;
}
// Time-complexity  : O(n * n * r) => ~~O(n^3)
vector<int> generate_row(int row) {
    long long ans = 1;
    vector<int> ans_row;
    ans_row.push_back(1);
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ans_row.push_back(ans);
    }
    return ans_row;
}
vector<vector<int>> generate_OPTIMAL(int numRows) {
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++) {
        ans.push_back(generate_row(i));
    }
    return ans;
}
// Time-complexity  : O(n^2)

int main() {
    int numRows;
    cin >> numRows;
    for (auto row : generate_OPTIMAL(numRows)) {
        for (auto ele : row) {
            cout << ele << " ";
        }
        cout << endl;
    }
}