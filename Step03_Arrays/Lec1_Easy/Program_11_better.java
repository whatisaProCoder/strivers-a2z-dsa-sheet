package Step03_Arrays.Lec1_Easy;

// Find missing number in an array.
// Use Hashing.

public class Program_11_better {
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
        int[] hash = new int[getMaxElement(nums) + 1];

        // O(N)
        for (int i = 0; i < nums.length; i++) {
            hash[nums[i]] = 1;
        }

        // O(N)
        for (int i = 0; i <= hash.length; i++) {
            if (hash[i] == 0) {
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

// Time-complexity  : O(2N)
// Space-complexity : O(N)
