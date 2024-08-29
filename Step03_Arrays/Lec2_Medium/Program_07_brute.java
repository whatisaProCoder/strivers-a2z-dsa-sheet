package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Next Permutation
// Brute Force
//  1. Generate all sorted permutations
//  2. Linear search
//  3. Next permutation is the answer

public class Program_07_brute {
    public static List<List<Integer>> generateAllPermutations(int[] nums) {
        // very long code, can ignore
        return null;
    }

    public static int[] nextPermutation(int[] nums) {
        // move to optimal solution
        return null;
    }

    public static void main(String[] args) {
        int[] nums = {3, 1, 2};

        System.out.println("Next permutation..");
        System.out.println(Arrays.toString(nextPermutation(nums)));
    }
}

// Time-complexity  : O(N! * N)
// Space-complexity : O(1) + { O(N) + O(N!) Auxiliary Space }
