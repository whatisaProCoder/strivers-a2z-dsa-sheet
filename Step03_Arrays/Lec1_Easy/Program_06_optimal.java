package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Left Rotate an array by 'd' places

public class Program_06_optimal {
    public static void reverse(int[] arr, int start, int end) {
        while (start <= end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public static void leftRotate(int[] arr, int n, int d) {
        d = d % n;

        // O(d)
        reverse(arr, 0, d - 1);

        // O(n-d)
        reverse(arr, d, n - 1);

        // O(n)
        reverse(arr, 0, n - 1);
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8};
        int n = arr.length;
        int d = 4; // rotate by 2 places;

        leftRotate(arr, n, d);

        for (var element : arr) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(2n)
// Space-complexity : O(1)
