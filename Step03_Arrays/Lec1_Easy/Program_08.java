package Step03_Arrays.Lec1_Easy;

// Linear Search
// Return index of first occurrence

public class Program_08 {
    public static int search(int[] arr, int key) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 9, 8, 6, 4, 2, 4, 6};
        int key = 8;

        int index = search(arr, key);
        if (index != -1) {
            System.out.println("Found at index = " + index);
        } else {
            System.out.println("Element not found");
        }
    }
}

// Time-complexity  : O(n)
// Space-complexity : O(1)
