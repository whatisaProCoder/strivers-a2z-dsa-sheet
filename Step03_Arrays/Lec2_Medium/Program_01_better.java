package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Two sum problem
// Better : Using Hashing

public class Program_01_better {
    public static int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int[] out = new int[2];
        SortedMap<Integer, Integer> hashMap = new TreeMap<>();
        // <element,index>

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int y = target - x;
            if (hashMap.containsKey(y)) {
                out[0] = hashMap.get(y);
                out[1] = i;
                return out;
            }
            hashMap.put(x, i);
        }

        return out;
    }

    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;

        System.out.print("Indices : ");
        for (int element : twoSum(nums, target)) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(N log N)
// Space-complexity : O(N)
