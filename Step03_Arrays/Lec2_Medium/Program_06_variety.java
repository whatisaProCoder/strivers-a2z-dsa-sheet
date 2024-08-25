package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Rearrange the array in alternating positive and negative items
// Number of positives not equal to negatives
// Fallback to the brute-force solution

public class Program_06_variety {
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
        if (pos.size() > neg.size()) {
            for (int i = 0; i < neg.size(); i++) {
                nums[2 * i] = pos.get(i);
                nums[2 * i + 1] = neg.get(i);
            }

            int index = neg.size() * 2;
            for (int i = neg.size(); i < pos.size(); i++) {
                nums[index] = pos.get(i);
                index++;
            }
        } else {
            for (int i = 0; i < pos.size(); i++) {
                nums[2 * i] = pos.get(i);
                nums[2 * i + 1] = neg.get(i);
            }

            // does not execute if pos.size() == neg.size()
            int index = pos.size() * 2;
            for (int i = pos.size(); i < neg.size(); i++) {
                nums[index] = neg.get(i);
                index++;
            }
        }

        return nums;
    }

    public static void main(String[] args) {
        int[] nums = {3, 1, -9, -9, -2, -5, 2, -4, -9, -9,};

        System.out.println("Required arrangement..");
        System.out.println(Arrays.toString(rearrangeArray(nums)));
    }
}

// Time-complexity  : O(N) + O(N)
// Space-complexity : O(N/2) + O(N/2)
