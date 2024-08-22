#include <bits/stdc++.h>
using namespace std;

// Two sum problem
// Better : Using Hashing

vector<int> twoSum(vector<int> nums, int target) {
    int n = nums.size();
    map<int, int> hashMap;
    // <element,index>

    for (int i = 0; i < n; i++) {
        int x = nums[i];
        int y = target - x;
        if (hashMap.find(y) != hashMap.end()) {
            return {hashMap[y], i};
        }
        hashMap[x] = i;
    }

    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    cout << "Indices : ";
    for (auto element : twoSum(nums, target)) {
        cout << element << " ";
    }
}

// Time-complexity  : O(N log N)
// Space-complexity : O(N)