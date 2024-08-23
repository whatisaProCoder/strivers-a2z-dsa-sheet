package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Moving zeroes to end 

public class Program_07 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(in.nextInt());
        }

        // processing
        int i, j = -1;
        for (i = 0; i < n; i++) {
            if (arr.get(i) == 0) {
                j = i;
                break;
            }
        }
        // j=-1 if there are no zeroes in array
        // then no need of processing further
        if (j != -1)
            for (i = j + 1; i < n; i++) {
                if (arr.get(i) != 0) {
                    Collections.swap(arr, i, j);
                    j++;
                }
            }

        for (var element : arr) {
            System.out.print(element + " ");
        }

        in.close();
    }
}

// Time-complexity : O(N)
// Space-complexity : O(1)
