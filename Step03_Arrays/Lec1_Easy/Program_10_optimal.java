package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Find the intersection of two sorted arrays.
// 2-pointer approach
// Repetition of elements in final array is allowed.

public class Program_10_optimal {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4, 4, 6, 7, 7, 8, 9};
        int n1 = a.length;

        int[] b = {2, 2, 3, 3, 4, 4, 6, 6, 7, 7};
        int n2 = b.length;

        ArrayList<Integer> intersection = new ArrayList<>();
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (a[i] < b[j]) {
                i++;
            } else if (a[i] > b[j]) {
                j++;
            } else {
                intersection.add(a[i]);
                i++;
                j++;
            }
        }

        for (Integer element : intersection) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(n1+n2)
// Space-complexity : O(n1+n2) [for returning the answer-array]
// Space-complexity : O(1)     [for processing, no extra space is used]
