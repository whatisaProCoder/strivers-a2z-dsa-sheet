package Step01_Basics.Lec3_STL_Collections;

import java.util.*;

public class Algorithms {
    boolean comp(Map.Entry<Integer, Integer> p1, Map.Entry<Integer, Integer> p2) {
        if (p1.getValue() < p2.getValue())
            return true;
        if (p1.getValue() > p2.getValue())
            return false;
        // if they are same
        if (p1.getKey() > p2.getValue())
            return true;
        // if p1.getKey() < p2.getKey()
        return false;
    }

    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr.add(1);
        arr.add(5);
        arr.add(8);
        arr.add(2);
        arr.add(3);
        for (var element : arr) {
            System.out.print(element + " ");
        }
        System.out.println();

        System.out.println("Sorting ArrayList<Integer> in ascending order...");
        arr.sort(null);
        for (var element : arr) {
            System.out.print(element + " ");
        }
        System.out.println();

        System.out.println("Sorting ArrayList<Integer> in descending order...");
        arr.sort(Comparator.reverseOrder());
        for (var element : arr) {
            System.out.print(element + " ");
        }
        System.out.println();

        Integer maxElement = Collections.max(arr);
        System.out.println("Max element in 'arr' : " + maxElement);
        Integer minElement = Collections.min(arr);
        System.out.println("Min element in 'arr' : " + minElement);

        int num = 7;
        int countBinary = Integer.bitCount(num);
        System.out.println("countBinary(num) : " + countBinary);

        long longNum = 2773737;
        countBinary = Long.bitCount(longNum);
        System.out.println("countBinary(longNum) : " + countBinary);
        System.out.println();
    }
}
