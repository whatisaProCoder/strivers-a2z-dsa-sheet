package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Longest Consecutive Sequence in an Array
// Better Solution

public class Program_09_better {
    public static int getLongestSequenceLength(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);

        int longest = 1;
        int countCurrent = 0;
        int lastSmaller = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (nums[i] - 1 == lastSmaller) {
                countCurrent = countCurrent + 1;
                lastSmaller = nums[i];
            } else if (nums[i] == lastSmaller) {
                // nothing to be done
            } else if (nums[i] != lastSmaller) {
                countCurrent = 1;
                lastSmaller = nums[i];
            }
            longest = Math.max(longest, countCurrent);
        }

        return longest;
    }

    public static void main(String[] args) {
        int[] nums = {100, 102, 100, 101, 101, 4, 3, 2, 5, 2, 1, 1, 1, 2};

        System.out.println("Longest consecutive sequence length : " + getLongestSequenceLength(nums));
    }
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)