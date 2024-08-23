package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Left Rotate an array by one place

public class Program_05 {
    public static void main(String[] args) {
        int[] arr = {2, 4, 6, 8, 10, 12};
        int n = arr.length;

        int temp = arr[0];
        for (int i = 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;

        for (var element : arr) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity : O(N)
// Space-complexity : O(1)