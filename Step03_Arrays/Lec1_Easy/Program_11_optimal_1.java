package Step03_Arrays.Lec1_Easy;

// Find missing number in an array.
// Using sum-concept.

public class Program_11_optimal_1 {
    public static int missingNumber(int[] nums) {
        int n = nums.length;
        int sum_total = n * (n + 1) / 2;
        int sum_arr = 0;
        for (int element : nums) {
            sum_arr += element;
        }
        return sum_total - sum_arr;
    }

    public static void main(String[] args) {
        int[] nums = {0, 1, 2, 4, 5, 6, 7, 8, 9, 10};
        System.out.println("Missing number : " + missingNumber(nums));
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)

// n*(n+1)/2 will overflow for int = 10^5
// requires long, but takes more storage
// so, XOR-concept slightly better in space-complexity
