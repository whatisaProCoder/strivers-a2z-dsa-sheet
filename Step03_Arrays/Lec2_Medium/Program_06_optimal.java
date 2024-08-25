package Step03_Arrays.Lec2_Medium;

import java.util.ArrayList;
import java.util.Arrays;

// Rearrange the array in alternating positive and negative items
// nums.length = always even
// After rearranging, nums = {+, -, +, -, +, -, +}
// Optimal : Using two-pointer approach

public class Program_06_optimal {
    public static int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int posIndex = 0;
        int negIndex = 1;
        int[] ans = new int[nums.length];

        for (int element : nums) {
            if (element < 0) {
                ans[negIndex] = element;
                negIndex += 2;
            } else {
                ans[posIndex] = element;
                posIndex += 2;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        int[] nums = {3, 1, -2, -5, 2, -4};

        System.out.println("Required arrangement..");
        System.out.println(Arrays.toString(rearrangeArray(nums)));
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(N) [to return the answer]
