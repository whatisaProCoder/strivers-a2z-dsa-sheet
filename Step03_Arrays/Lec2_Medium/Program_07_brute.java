package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Next Permutation
// Brute Force
//  1. Generate all sorted permutations
//  2. Linear search
//  3. Next permutation is the answer

public class Program_07_brute {
    public static List<List<Integer>> getAllPermutations(ArrayList<Integer> nums) {
        // very long code, no need
        return null;
    }

    public static int[] nextPermutation(ArrayList<Integer> nums) {
        // move to optimal solution
        return null;
    }

    public static void main(String[] args) {
        ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(3, 2, 1));

        System.out.println("Next permutation..");
        System.out.println(Arrays.toString(nextPermutation(nums)));
    }
}

// Time-complexity : O(N! * N)
