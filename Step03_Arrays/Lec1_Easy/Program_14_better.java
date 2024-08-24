package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Longest subarray with given sum K (positives+zeroes+negatives)
// Contiguous part of the array is a subarray.
// Better : Using Hashing.
// For negatives, this is the optimal solution.

public class Program_14_better {
    public static int maxSubArrayLength(int[] nums, int K) {
        int n = nums.length;
        SortedMap<Integer, Integer> preSumMap = new TreeMap<>();
        // SortedMap<num, index>

        int sum = 0;
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum == K) {
                maxLen = Math.max(maxLen, i + 1);
            }

            int rem = sum - K;
            if (preSumMap.containsKey(rem)) {
                int len = i - preSumMap.get(rem);
                maxLen = Math.max(maxLen, len);
            }

            // edge case : for zeroes
            if (preSumMap.containsKey(sum)) {
                preSumMap.put(sum, i);
            }
        }
        return maxLen;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 1, 0, 0, -2, 2, 1};
        int K = 4;

        System.out.println("Sum K = " + K);
        System.out.println("Max sub-array length = " + maxSubArrayLength(nums, K));
    }
}

// Time-complexity  : O(N log N)         [for SortedMap]
//                    O(N x 1) to O(N ^ 2) [for HashMap]
// Space-complexity : O(N)
