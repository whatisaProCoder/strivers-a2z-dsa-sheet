package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Find the number that appears once, and other numbers twice.
// Input  : 1 1 2 3 3 4 4
// Output : 2 (APPEARS ONCE)

public class Program_13_better {
    public static int appearsOnce(int[] nums) {
        Map<Integer, Integer> hashMap = new HashMap<>();

        for (int element : nums) {
            hashMap.put(element, hashMap.getOrDefault(element, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : hashMap.entrySet()) {
            if (entry.getValue() == 1) {
                return entry.getKey();
            }
        }

        // making the compiler happy
        return Integer.MIN_VALUE;
    }

    public static void main(String[] args) {
        int[] nums = {1, 1, 2, 2, 3, 3, 7, 9, 9};

        System.out.println("Appears once = " + appearsOnce(nums));
    }
}

// Time-complexity  : O(N log M) + O(M)
// Space-complexity : O(M), where M = N/2 + 1
