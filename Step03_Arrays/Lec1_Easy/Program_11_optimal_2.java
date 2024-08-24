package Step03_Arrays.Lec1_Easy;

// Find missing number in an array.
// Using XOR-concept.

public class Program_11_optimal_2 {
    public static int missingNumber(int[] nums) {
        int n = nums.length;
        int XOR_1 = 0;
        int XOR_2 = 0;

        for (int i = 0; i <= n; i++) {
            XOR_1 = XOR_1 ^ i;
            if (i < n)
                XOR_2 = XOR_2 ^ nums[i];
        }

        return XOR_1 ^ XOR_2;
    }

    public static void main(String[] args) {
        int[] nums = {0, 1, 2, 3, 4, 5, 7, 8, 9, 10};
        System.out.println("Missing number : " + missingNumber(nums));
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)
// no-need for long-type
// takes less storage than sum-concept
