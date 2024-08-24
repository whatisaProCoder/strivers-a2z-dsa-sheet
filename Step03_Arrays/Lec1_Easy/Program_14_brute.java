package Step03_Arrays.Lec1_Easy;

// Longest subarray with given sum K (positives+zeroes+negatives)
// Contiguous part of the array is a subarray.
// Brute : Generate all sub-arrays.
// For negatives, this is the better solution.

public class Program_14_brute {
    public static int maxSubArrayLength(int[] nums, int K) {
        int n = nums.length;
        int maxLength = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                /*
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }
                */
                // causes O(N^3) t-complexity

                sum += nums[j];
                if (sum == K) {
                    maxLength = Math.max(maxLength, j - i + 1);
                }
            }
        }
        return maxLength;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 1, 0, 0, -2, 2, 1};
        int K = 4;

        System.out.println("Sum K = " + K);
        System.out.println("Max sub-array length = " + maxSubArrayLength(nums, K));
    }
}

// Time-complexity  : ~O(N^3) to O(N^2) after optimisation
// Space-complexity : O(1)
