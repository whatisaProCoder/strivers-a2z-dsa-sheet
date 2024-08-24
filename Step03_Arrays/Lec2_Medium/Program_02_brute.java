package Step03_Arrays.Lec2_Medium;

import java.util.*;

// Sort an array of 0's 1's and 2's
// Brute : Use Merge-Sort

public class Program_02_brute {
    public static void merge(int[] arr, int low, int mid, int high) {
        ArrayList<Integer> temp = new ArrayList<>();
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.add(arr[left]);
                left++;
            } else {
                temp.add(arr[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.add(arr[left]);
            left++;
        }
        while (right <= high) {
            temp.add(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp.get(i - low);
            // low - low = 0,
            // low + 1 - low = 1,
            // low + 2 - low = 2, etc.
        }
    }

    // Divide & Merge!
    // pass low = 0 & high = n-1
    public static void mergeSort(int[] arr, int low, int high) {
        // base case
        if (low >= high)
            return;
        // processing
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    public static void main(String[] args) {
        int[] nums = {2, 0, 2, 1, 1, 0};
        mergeSort(nums, 0, nums.length - 1);
        for (int element : nums) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(N log N)
// Space-complexity : O(N)
