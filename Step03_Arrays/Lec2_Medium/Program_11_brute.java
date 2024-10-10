package Step03_Arrays.Lec2_Medium;

import java.util.*;

public class Program_11_brute {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(5);
        list.add(3);
        list.add(8);
        list.add(1);
        list.add(2);

        System.out.println("Before sorting: " + list);

        Collections.sort(list);

        System.out.println("After sorting: " + list);
    }
}
