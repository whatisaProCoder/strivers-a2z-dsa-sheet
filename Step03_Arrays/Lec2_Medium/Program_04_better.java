package Step03_Arrays.Lec2_Medium;

// Kadane's Algorithm, maximum sub-array sum
// Better : Using two for-loops

public class Program_04_better {
    public static int maxSubArraySum(int[] nums) {
        int n = nums.length;
        int sum;
        int max_sum = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                max_sum = Math.max(max_sum, sum);
            }
        }

        return max_sum;
    }

    public static void main(String[] args) {
        int[] nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

        System.out.println("Maximum sub-array sum = " + maxSubArraySum(nums));
    }
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)
