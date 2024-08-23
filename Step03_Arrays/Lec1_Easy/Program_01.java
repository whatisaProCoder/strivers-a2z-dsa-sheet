package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Largest Element in an Array

public class Program_01 {
    public static void main(String[] args) {
        int[] nums = {7, 8, 66, 4, 2, 4, 6, 88, 2};
        
        // processing
        int largest = nums[0];
        for (var element : nums) {
            if (element > largest) {
                largest = element;
            }
        }

        System.out.println("Largest Element : " + largest);
    }
}

// Time-complexity : O(N)
