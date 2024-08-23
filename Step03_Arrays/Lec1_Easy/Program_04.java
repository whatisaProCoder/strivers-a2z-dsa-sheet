package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Remove duplicates from Sorted array

public class Program_04 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

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

        in.close();
    }
}
