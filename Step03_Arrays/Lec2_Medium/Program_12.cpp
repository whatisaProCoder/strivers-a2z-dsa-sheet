#include <bits/stdc++.h>
using namespace std;

// Print the matrix in spiral manner

vector<int> spiralOrder_BRUTE(vector<vector<int>> &matrix) {}

vector<int> spiralOrder_BETTER(vector<vector<int>> &matrix) {}

vector<int> spiralOrder_OPTIMAL(vector<vector<int>> &matrix) {}

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
        cout << element << endl;
    }
}