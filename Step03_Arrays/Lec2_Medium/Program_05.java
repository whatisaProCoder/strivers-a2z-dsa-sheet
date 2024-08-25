package Step03_Arrays.Lec2_Medium;

// Best Time to Buy and Sell Stock

public class Program_05 {
    public static int getMaxProfit(int[] nums) {
        int n = nums.length;
        int minPrice = nums[0];
        int maxProfit = 0;

        for (int i = 1; i < n; i++) {
            int price_diff = nums[i] - minPrice;
            maxProfit = Math.max(maxProfit, price_diff);
            minPrice = Math.min(minPrice, nums[i]);
        }

        return maxProfit;
    }

    public static void main(String[] args) {
        int[] nums = {7, 1, 5, 3, 6, 4};

        System.out.println("Maximum profit = " + getMaxProfit(nums));
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)
