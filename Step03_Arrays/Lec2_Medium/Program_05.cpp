#include <bits/stdc++.h>
using namespace std;

// Best Time to Buy and Sell Stock

int getMaxProfit(vector<int> nums) {
    int n = nums.size();
    int min_price = nums[0];
    int max_profit = 0;

    for (int i = 1; i < n; i++) {
        int price_diff = nums[i] - min_price;
        max_profit = max(max_profit, price_diff);
        min_price = min(min_price, nums[i]);
    }

    return max_profit;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum profit = " << getMaxProfit(nums);
}

// Time-complexity  : O(N)
// Space-complexity : O(1)