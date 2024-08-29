package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Leaders in an Array problem
// Brute Force Solution

public class Program_08_brute {
    public static ArrayList<Integer> getLeaders(int[] nums) {
        int n = nums.length;
        ArrayList<Integer> leaders = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            boolean isLeader = true;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    isLeader = false;
                    break;
                }
            }
            if (isLeader) {
                leaders.add(nums[i]);
            }
        }

        return leaders;
    }

    public static void main(String[] args) {
        int[] nums = {10, 22, 12, 3, 0, 6};

        System.out.println("Leaders..");
        System.out.println(getLeaders(nums));
    }
}

// Time-complexity  : ~O(N^2)
// Space-complexity : O(N)
