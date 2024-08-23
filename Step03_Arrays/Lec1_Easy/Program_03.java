package Step03_Arrays.Lec1_Easy;

import java.util.Scanner;

// Check if the array is sorted

public class Program_03 {
    public static boolean isSorted(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            if (arr[i - 1] <= arr[i]) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 5, 6, 7, 8};

        if (isSorted(arr)) {
            System.out.println("Sorted");
        } else {
            System.out.println("Not Sorted");
        }
    }
}

// Time-complexity : O(N)
