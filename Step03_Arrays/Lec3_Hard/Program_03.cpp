#include <bits/stdc++.h>
using namespace std;

// Problem

vector<vector<int>> threeSum_BRUTE(vector<int> &nums) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
// Time-complexity  : O(n^3 * log(number of unique triplets))
// Space-complexity : O(2 * (number of unique triplets))

vector<vector<int>> threeSum_BETTER(vector<int> &nums) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        set<int> hashset;
        for (int j = i + 1; j < n; j++) {
            int third = -(nums[i] + nums[j]);
            if (hashset.find(third) != hashset.end()) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
// Time-complexity  : O(n^2 * log M)
// Space-complexity : O(n) + O(2 * (number of unique triplets))

vector<vector<int>> threeSum_OPTIMAL(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }
    return ans;
}
// Time-complexity  : O(n log n) [sorting] + O(n^2)
// Space-complexity : O(number of unique triplets)

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (auto row : threeSum_BRUTE(nums)) {
        for (auto ele : row) cout << ele << " ";
        cout << endl;
    }
}