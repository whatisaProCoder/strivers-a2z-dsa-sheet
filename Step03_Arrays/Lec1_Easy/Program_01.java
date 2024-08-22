package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Largest Element in an Array

public class Program_01 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int nums[] = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }

        // processing
        int largest = nums[0];
        for (var element : nums) {
            if (element > largest) {
                largest = element;
            }
        }

        System.out.println("Largest Element : " + largest);

        in.close();
    }
}

// Time-complexity : O(N)
