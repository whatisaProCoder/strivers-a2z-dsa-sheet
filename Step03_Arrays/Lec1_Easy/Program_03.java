package Step03_Arrays.Lec1_Easy;

import java.util.Scanner;

// Check if the array is sorted

public class Program_03 {
    public static boolean isSorted(int arr[]) {
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
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        if (isSorted(arr)) {
            System.out.println("Sorted");
        } else {
            System.out.println("Not Sorted");
        }

        in.close();
    }
}

// Time-complexity : O(N)
