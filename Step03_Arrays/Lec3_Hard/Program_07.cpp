#include <bits/stdc++.h>
using namespace std;

// Merge Overlapping Subintervals

vector<vector<int>> merge_BRUTE(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        int start = intervals[i][0];
        int end = intervals[i][1];
        if (!ans.empty() && end <= ans.back()[1]) continue;
        for (int j = i + 1; j < n; j++) {
            if (intervals[j][0] <= end)
                end = max(end, intervals[j][1]);
            else
                break;
        }
        ans.push_back({start, end});
    }
    return ans;
}
// Time-complexity  : O(n log n) [sorting] + O(2n) [loop] => O(n log n)
// Space-complexity : O(n) [if no merging takes place]

vector<vector<int>> merge_OPTIMAL(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        if (ans.empty() || intervals[i][0] > ans.back()[1])
            ans.push_back(intervals[i]);
        else
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
    }
    return ans;
}
// Time-complexity  : O(n log n) [sorting] + O(n) [loop] => O(n log n)
// Space-complexity : O(n) [if no overlapping happens]

int main() {
    vector<vector<int>> intervals = {{1, 3},  {2, 6}, {8, 9},   {9, 11},
                                     {8, 10}, {2, 4}, {15, 18}, {16, 17}};
    for (auto interval : merge_OPTIMAL(intervals)) {
        for (auto element : interval) cout << element << " ";
        cout << endl;
    }
}