package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Rearrange the array in alternating positive and negative items
// nums.length = always even
// After rearranging, nums = {+, -, +, -, +, -, +}
// Brute : Using two ArrayLists

public class Program_06_brute {
    public static int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();

        // O(N)
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                pos.add(nums[i]);
            } else {
                neg.add(nums[i]);
            }
        }

        // O(N)
        for (int i = 0; i < n / 2; i++) {
            nums[2 * i] = pos.get(i);
            nums[2 * i + 1] = neg.get(i);
        }

        return nums;
    }

    public static void main(String[] args) {
        int[] nums = {3, 1, -2, -5, 2, -4};

        System.out.println("Required arrangement..");
        System.out.println(Arrays.toString(rearrangeArray(nums)));
    }
}

// Time-complexity  : O(N) + O(N)
// Space-complexity : O(N)
