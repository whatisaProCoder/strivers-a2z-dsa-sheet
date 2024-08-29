package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Next Permutation
// Brute Force
//  1. Generate all sorted permutations
//  2. Linear search
//  3. Next permutation is the answer

public class Program_07_brute {
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void recursivePermutationFunction(int index, int[] nums, List<List<Integer>> answer) {
        if (index == nums.length) {
            ArrayList<Integer> temp = new ArrayList<>();
            for (int element : nums) {
                temp.add(element);
            }
            answer.add(temp);
        } else {
            for (int i = index; i < nums.length; i++) {
                swap(nums, index, i);
                recursivePermutationFunction(index + 1, nums, answer);
                swap(nums, index, i);
            }
        }
    }

    public static List<List<Integer>> generateAllPermutations(int[] nums) {
        List<List<Integer>> answer = new ArrayList<>();
        recursivePermutationFunction(0, nums, answer);
        return answer;
    }

    public static int[] nextPermutation(int[] nums) {
        // move to optimal solution
        return null;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3};

        System.out.println(generateAllPermutations(nums));

        System.out.println("Next permutation..");
        System.out.println(Arrays.toString(nextPermutation(nums)));
    }
}

// Time-complexity  : O(N! * N)
// Space-complexity : O(1) + { O(N) + O(N!) Auxiliary Space }
