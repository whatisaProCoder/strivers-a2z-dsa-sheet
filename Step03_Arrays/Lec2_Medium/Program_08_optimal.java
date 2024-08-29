package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Leaders in an Array problem
// Optimal Solution

public class Program_08_optimal {
    public static ArrayList<Integer> getLeaders(int[] nums) {
        int n = nums.length;
        ArrayList<Integer> leaders = new ArrayList<>();

        int max = Integer.MIN_VALUE;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > max) {
                leaders.add(nums[i]);
                max = nums[i];
            }
        }

        Collections.reverse(leaders);

        return leaders;
    }

    public static void main(String[] args) {
        int[] nums = {10, 22, 12, 3, 0, 6};

        System.out.println("Leaders..");
        System.out.println(getLeaders(nums));
    }
}

// Time-complexity  : O(N) + O(N) {for reversing}
// Space-complexity : O(N)
