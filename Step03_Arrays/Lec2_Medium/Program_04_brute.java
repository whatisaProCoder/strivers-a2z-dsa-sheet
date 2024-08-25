package Step03_Arrays.Lec2_Medium;

// Kadane's Algorithm, maximum subarray sum
// Brute : Using three for-loops

public class Program_04_brute {
    public static int maxSubArraySum(int[] nums) {
        int n = nums.length;
        int sum;
        int maxSum = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }
                maxSum = Math.max(maxSum, sum);
            }
        }

        return maxSum;
    }

    public static void main(String[] args) {
        int[] nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

        System.out.println("Maximum sub-array sum = " + maxSubArraySum(nums));
    }
}

// Time-complexity  : O(~N^3)
// Space-complexity : O(1)
