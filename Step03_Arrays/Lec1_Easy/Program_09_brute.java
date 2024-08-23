package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Find the union of two sorted arrays

public class Program_09_brute {
    public static int[] getUnion(int[] arr1, int[] arr2) {

        // extra space taken
        Set<Integer> st = new TreeSet<>();

        // O(n1 log n); n = size of set
        for (int element : arr1) {
            st.add(element);
        }

        // O(n2 log n); n = size of set
        for (int element : arr2) {
            st.add(element);
        }

        // extra space taken
        int[] union = new int[st.size()];
        int i = 0;

        // O(n1 + n2)
        for (Integer element : st) {
            union[i++] = element;
        }

        return union;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 3, 3, 7, 9, 9, 9};
        int[] arr2 = {2, 4, 4, 4, 6, 8, 8, 8, 10};

        for (int element : getUnion(arr1, arr2)) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(n1 log n) + O(n2 log n) + O(n1+n2)
// Space-complexity : O(n1 + n2) + O(n1 + n2)
