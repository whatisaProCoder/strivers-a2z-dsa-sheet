package Step03_Arrays.Lec1_Easy;

import java.util.*;

// Left Rotate an array by 'd' places

public class Program_06_better {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int d = in.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(in.nextInt());
        }

        d = d % n;
        ArrayList<Integer> temp = new ArrayList<>();
        for (int i = 0; i < d; i++) {
            temp.add(arr.get(i));
        }
        for (int i = d; i < n; i++) {
            arr.set(i - d, arr.get(i));
        }
        for (int i = n - d; i < n; i++) {
            arr.set(i, temp.get(i - (n - d)));
        }

        for (var element : arr) {
            System.out.print(element + " ");
        }

        in.close();
    }
}

// Time-complexity : O(n+d)
// Space-complexity : O(d)
