package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Find the union of two sorted arrays.
// 2-pointer approach

public class Program_09_optimal {
    public static ArrayList<Integer> getUnion(int[] arr1, int[] arr2) {
        int n1 = arr1.length;
        int n2 = arr2.length;

        ArrayList<Integer> union = new ArrayList<>();
        int i = 0, j = 0;

        while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) {
                if (union.size() == 0 || union.get(union.size() - 1) != arr1[i]) {
                    union.add(arr1[i]);
                }
                i++;
            } else {
                if (union.size() == 0 || union.get(union.size() - 1) != arr2[j]) {
                    union.add(arr2[j]);
                }
                j++;
            }
        }

        while (i < n1) {
            if (union.size() == 0 || union.get(union.size() - 1) != arr1[i]) {
                union.add(arr1[i]);
            }
            i++;
        }
        while (j < n2) {
            if (union.size() == 0 || union.get(union.size() - 1) != arr2[j]) {
                union.add(arr2[j]);
            }
            j++;
        }

        return union;
    }

    public static void main(String[] args) {
        int[] arr1 = { 1, 3, 3, 7, 9, 9, 9 };
        int[] arr2 = { 2, 4, 4, 4, 6, 8, 8, 8, 10 };

        for (int element : getUnion(arr1, arr2)) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity : O(n1+n2)
// Space-complexity : O(n1+n2) for returning the union
