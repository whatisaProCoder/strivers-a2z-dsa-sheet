package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Next Permutation
// Optimal Solution

public class Program_07_optimal {
    public static ArrayList<Integer> nextPermutation(ArrayList<Integer> nums) {
        int n = nums.size();
        int index = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums.get(i) < nums.get(i + 1)) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            Collections.reverse(nums);
            return nums;
        }

        for (int i = n - 1; i > index; i--) {
            if (nums.get(i) > nums.get(index)) {
                Collections.swap(nums, i, index);
                break;
            }
        }

        Collections.reverse(nums.subList(index + 1, n));

        return nums;
    }

    public static void main(String[] args) {
        ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(3, 1, 2));

        System.out.println("Next permutation..");
        System.out.println(nextPermutation(nums));
    }
}

// Time-complexity  : O(N) + O(N) + O(N)
// Space-complexity : O(1)
