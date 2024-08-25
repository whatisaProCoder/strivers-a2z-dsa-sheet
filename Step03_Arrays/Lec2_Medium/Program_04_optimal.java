package Step03_Arrays.Lec2_Medium;

// Kadane's Algorithm, maximum subarray sum
// Optimal : Using only one for-loop

public class Program_04_optimal {
    public static int maxSubArraySum(int[] nums) {
        int n = nums.length;
        int sum = 0;
        int maxSum = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum > maxSum) {
                maxSum = sum;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        // if question only requires maxSum >= 0,
        // then init maxSum = 0 for negative-value
    /*
    if (maxSum < 0) {
        maxSum = 0;
    }
    */

        return maxSum;
    }

    public static int[] getMaxSubArraySum(int[] nums) {
        int n = nums.length;
        int sum = 0;
        int maxSum = Integer.MIN_VALUE;

        int start = 0;
        int ansStart = -1;
        int ansEnd = -1;

        for (int i = 0; i < n; i++) {
            if (sum == 0) start = i;

            sum += nums[i];

            if (sum > maxSum) {
                maxSum = sum;
                ansStart = start;
                ansEnd = i;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        int[] ans = new int[ansEnd - ansStart + 1];
        for (int i = ansStart; i <= ansEnd; i++) {
            ans[i - ansStart] = nums[i];
        }

        return ans;
    }

    public static void main(String[] args) {
        int[] nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

        System.out.println("Maximum sub-array sum = " + maxSubArraySum(nums));

        System.out.println("The sub-array : ");
        for (int element : getMaxSubArraySum(nums)) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)
