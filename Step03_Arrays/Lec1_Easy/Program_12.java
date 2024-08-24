package Step03_Arrays.Lec1_Easy;

// Maximum Consecutive Ones.
// Input  : 1 1 0 1 1 1 1 0 1
// Output : 4

public class Program_12 {
    public static int maxConsecutiveOnes(int[] nums) {
        int n = nums.length;
        int ones = 0;
        int maxOnes = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                ones++;
                maxOnes = Math.max(maxOnes, ones);
            } else {
                ones = 0;
            }
        }
        return maxOnes;
    }

    public static void main(String[] args) {
        int[] nums = {1, 1, 0, 1, 1, 1, 1, 0, 1};

        System.out.println(maxConsecutiveOnes(nums));
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)