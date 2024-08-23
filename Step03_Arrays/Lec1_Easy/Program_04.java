package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Remove duplicates from Sorted array

public class Program_04 {
    public static void main(String[] args) {
        int[] arr = {1, 1, 2, 2, 2, 3, 3, 5, 5, 5, 8, 8, 8, 9, 9};
        int n = arr.length;

        System.out.println("Before processing...");
        for (var element : arr) {
            System.out.print(element + " ");
        }
        System.out.println();

        int i = 0;
        for (int j = 1; j < n; j++) {
            if (arr[i] != arr[j]) {
                // inserting non-duplicate element at i = 1
                arr[i + 1] = arr[j];
                i++;
            }
        }

        System.out.println("After processing...");
        System.out.println("Size : " + (i + 1));
        System.out.print("Array : ");
        for (int j = 0; j < i + 1; j++) {
            System.out.print(arr[j] + " ");
        }
    }
}
