package Step03_Arrays.Lec1_Easy;

// Longest subarray with given sum K (positives)
// Contiguous part of the array is a subarray.
// Optimal : Using 2-pointer and greedy approach.
// This cannot run for zeroes & negatives.

public class Program_14_optimal {
    public static int maxSubArrayLength(int[] nums, int K) {
        int n = nums.length;
        int left = 0;
        int right = 0;
        int sum = nums[0];
        int maxLen = 0;

        while (right < n) {
            while (left <= right && sum > K) {
                sum -= nums[left];
                left++;
            }

            if (sum == K) {
                maxLen = Math.max(maxLen, right - left + 1);
            }

            right++;
            if (right < n) {
                sum += nums[right];
            }
        }
        return maxLen;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 1, 0, 0, -2, 2, 1};
        int K = 4;

        System.out.println("Sum K = " + K);
        System.out.println("Max sub-array length = " + maxSubArrayLength(nums, K));
    }
}

// Time-complexity  : O(2N)
// Space-complexity : O(1)