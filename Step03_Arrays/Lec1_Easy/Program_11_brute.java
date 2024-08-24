package Step03_Arrays.Lec1_Easy;

// Find missing number in an array

public class Program_11_brute {
    public static int missingNumber(int[] nums) {
        int n = nums.length;
        for (int i = 0; i <= n; i++) {
            int flag = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                return i;
            }
        }

        // making the compiler happy
        return Integer.MIN_VALUE;
    }

    public static void main(String[] args) {
        int[] nums = {0, 1, 2, 3, 4, 5, 7, 8, 9, 10};
        System.out.println("Missing number : " + missingNumber(nums));
    }
}

// Time-complexity : O(N^2)
