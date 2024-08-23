package Step03_Arrays.Lec1_Easy;

// Moving zeroes to end

public class Program_07 {
    public static void main(String[] args) {
        int[] arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
        int n = arr.length;

        // processing
        int i, j = -1;
        for (i = 0; i < n; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }
        // j=-1 if there are no zeroes in array
        // then no need of processing further
        if (j != -1)
            for (i = j + 1; i < n; i++) {
                if (arr[i] != 0) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    j++;
                }
            }

        for (var element : arr) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity : O(N)
// Space-complexity : O(1)
