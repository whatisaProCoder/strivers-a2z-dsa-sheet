#include <bits/stdc++.h>
using namespace std;

// Print the matrix in spiral manner

vector<int> spiralOrder_OPTIMAL(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    vector<int> ans;

    while (top <= bottom && left <= right) {
        // right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        // top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}
// Time-complexity  : O(n * m)
// Space-complexity : O(n * m) [for storing the answer]

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++) {
        vector<int> row(n);
        for (int j = 0; j < n; j++) {
            cin >> row[j];
        }
        matrix.push_back(row);
    }

    cout << "The matrix..." << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "In spiral order..." << endl;
    for (auto element : spiralOrder_OPTIMAL(matrix)) {
        cout << element << " ";
    }
}