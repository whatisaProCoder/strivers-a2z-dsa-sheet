package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Majority Element (>n/2 times)
// Better : Using Hashing

public class Program_03_better {
    public static int majorityElement(int[] nums) {
        int n = nums.length;
        SortedMap<Integer, Integer> map = new TreeMap<>();
        // <element, frequency>

        for (int element : nums) {
            map.put(element, map.getOrDefault(element, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() > n / 2) {
                return entry.getKey();
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        int[] nums = {4, 4, 2, 4, 3, 4, 4, 3, 2, 4};

        System.out.println("Majority element = " + majorityElement(nums));
    }
}

// Time-complexity  : O(N log N + N)
// Space-complexity : O(N) [for all unique elements]
