package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Left Rotate an array by 'd' places

public class Program_06_optimal {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int d = in.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(in.nextInt());
        }

        d = d % n;

        // O(d)
        Collections.reverse(arr.subList(0, d));

        // O(n-d)
        Collections.reverse(arr.subList(d, n));

        // O(n)
        Collections.reverse(arr.subList(0, n));

        for (var element : arr) {
            System.out.print(element + " ");
        }

        in.close();
    }
}

// Time-complexity : O(2n)
// Space-complexity : O(1)
