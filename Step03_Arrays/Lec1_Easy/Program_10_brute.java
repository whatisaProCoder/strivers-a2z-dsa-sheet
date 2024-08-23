package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Find the intersection of two sorted arrays.
// 2-pointer approach
// Repetition of elements in final array is allowed.

public class Program_10_brute {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4, 4, 6, 7, 7, 8, 9};
        int n1 = a.length;

        int[] b = {2, 2, 3, 3, 4, 4, 6, 6, 7, 7};
        int n2 = b.length;

        // making b-array smaller, since visitor-array works on b-array,
        // to make space-complexity lesser
        if (b.length > a.length) {
            int[] temp = a;
            a = b;
            b = temp;
        }

        ArrayList<Integer> intersection = new ArrayList<>();

        // stores '1' if an element is already visited
        ArrayList<Integer> visitor = new ArrayList<>(Collections.nCopies(n2, 0));

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (a[i] == b[j] && visitor.get(j) == 0) {
                    intersection.add(a[i]);
                    visitor.set(j, 1);
                    break; // breaks out of j-loop
                    // no need for further traversal
                }
                // since input-arrays are sorted, so if
                // b[j] > a[i], then no need for further traversal
                // as the same-element will not be found in b-array
                if (b[j] > a[i])
                    break;
            }
        }

        for (Integer element : intersection) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(n1*n2)
// Space-complexity : O(n2)
