package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Two sum problem
// Optimal : without using map data structure
// Greedy Approach
// Cannot return indices, only "YES" or "NO"

public class Program_01_optimal {
    public static String twoSum(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums);

        int left = 0;
        int right = n - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return "YES";
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return "NO";
    }

    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;

        System.out.print("twoSum() => " + twoSum(nums, target));
    }
}

// Time-complexity  : O(N log N) [sorting] + O(N) [processing]
// Space-complexity : O(1)
