package Step03_Arrays.Lec1_Easy;

// Find missing number in an array.
// Using sum-concept.

public class Program_11_optimal_1 {
    public static int getMaxElement(int[] nums) {
        int maxElement = Integer.MIN_VALUE;
        for (int element : nums) {
            if (element > maxElement) {
                maxElement = element;
            }
        }
        return maxElement;
    }

    public static int missingNumber(int[] nums) {
        int maxElement = getMaxElement(nums);
        int sum_total = maxElement * (maxElement + 1) / 2;
        int sum_arr = 0;
        for (int element : nums) {
            sum_arr += element;
        }
        return sum_total - sum_arr;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 7, 8, 9, 10};
        System.out.println("Missing number : " + missingNumber(nums));
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)

// n*(n+1)/2 will overflow for int = 10^5
// requires long, but takes more storage
// so, XOR-concept slightly better in space-complexity
