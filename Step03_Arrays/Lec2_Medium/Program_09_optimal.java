package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Longest Consecutive Sequence in an Array
// Optimal Solution

public class Program_09_optimal {
    public static int getLongestSequenceLength(int[] nums) {
        int n = nums.length;

        if (n == 0) return 0;

        int longest = 1;
        Set<Integer> st = new HashSet<>();
        for (int element : nums) {
            st.add(element);
        }

        for (int element : st) {
            if (!st.contains(element - 1)) {
                int count = 1;
                int x = element;
                while (st.contains(x + 1)) {
                    x = x + 1;
                    count++;
                }
                longest = Math.max(longest, count);
            }
        }

        return longest;
    }

    public static void main(String[] args) {
        int[] nums = {102, 4, 100, 1, 101, 3, 2, 1, 1};

        System.out.println("Longest consecutive sequence length : " + getLongestSequenceLength(nums));
    }
}

// Time-complexity  : O(1) {best case} or O(N) {worst case} +
//                    O(N) {set-adding} + O(N + N) {element-iteration}
//                 => O(3N) {best case}
// Space-complexity : O(N)