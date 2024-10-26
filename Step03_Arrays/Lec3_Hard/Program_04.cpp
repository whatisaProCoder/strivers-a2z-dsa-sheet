#include <bits/stdc++.h>
using namespace std;

// 4-Sum Problem

vector<vector<int>> fourSum_BRUTE(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
// Time-complexity  : O(n^4)
// Space-complexity : O(number of quads) * 2

vector<vector<int>> fourSum_BETTER(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            set<long long> hashset;
            for (int k = j + 1; k < n; k++) {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - sum;
                if (hashset.find(fourth) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
// Time-complexity  : O(n^3 x log (number of elements in the hashset,
//                                 variable throughout execution))
// Space-complexity : O(n) + O(2 * number of quads)

vector<vector<int>> fourSum_OPTIMAL(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                } else if (sum < target)
                    k++;
                else
                    l--;
            }
        }
    }
    return ans;
}
// Time-complexity  : O(n^2 * n) + O(n log n) [sorting]
// Space-complexity : O(number of quads) [for returning the answer]

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int target;
    cin >> target;
    for (auto row : fourSum_OPTIMAL(nums, target)) {
        for (auto ele : row) cout << ele << " ";
        cout << endl;
    }
}