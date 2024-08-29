package Step03_Arrays.Lec2_Medium;

// Longest Consecutive Sequence in an Array
// Brute Force Approach

public class Program_09_brute {
    public static boolean linearSearch(int[] nums, int key) {
        for (int element : nums) {
            if (element == key) {
                return true;
            }
        }
        return false;
    }

    public static int getLongestSequenceLength(int[] nums) {
        int n = nums.length;
        int longest = 1;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int count = 1;
            while (linearSearch(nums, x + 1)) {
                x = x + 1;
                count++;
            }
            if (count > longest) {
                longest = count;
            }
        }

        return longest;
    }

    public static void main(String[] args) {
        int[] nums = {102, 4, 100, 1, 101, 3, 2, 1, 1};

        System.out.println("Longest consecutive sequence length : " + getLongestSequenceLength(nums));
    }
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)