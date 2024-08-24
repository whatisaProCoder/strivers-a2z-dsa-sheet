package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Sort an array of 0's 1's and 2's
// Optimal : Dutch National Flag Algorithm

public class Program_02_optimal {
    public static void sortArray(ArrayList<Integer> nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if (nums.get(mid) == 0) {
                Collections.swap(nums, low, mid);
                low++;
                mid++;
            } else if (nums.get(mid) == 1) {
                mid++;
            } else {
                Collections.swap(nums, mid, high);
                high--;
            }
        }
    }

    public static void main(String[] args) {
        Integer[] nums = {2, 0, 2, 1, 1, 0, 2, 1, 2};
        ArrayList<Integer> numsList = new ArrayList<>(Arrays.asList(nums));

        sortArray(numsList);

        for (Integer element : numsList) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(N)
// Space-complexity : O(1)
