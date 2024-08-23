package Step03_Arrays.Lec1_Easy;

// Left Rotate an array by 'd' places

public class Program_06_better {
    public static void leftRotate(int[] arr, int n, int d) {
        d = d % n;
        int[] temp = new int[d];
        for (int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }
        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }
        for (int i = n - d; i < n; i++) {
            arr[i] = temp[i - (n - d)];
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8};
        int n = arr.length;
        int d = 2; // rotate by 2 places;

        leftRotate(arr, n, d);

        for (var element : arr) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity : O(n+d)
// Space-complexity : O(d)
