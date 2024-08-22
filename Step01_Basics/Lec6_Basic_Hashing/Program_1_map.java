package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Count elements of array using map

public class Program_1_map {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        // precompute
        SortedMap<Integer, Integer> map = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            int key = arr[i];
            int frequency = 0;
            if (map.containsKey(key))
                frequency = map.get(key);
            frequency++;
            map.put(key, frequency);
        }

        // iterate in the map
        System.out.println("Map Structure :");
        for (var mapElement : map.entrySet()) {
            System.out.println(mapElement.getKey() + " -> " + mapElement.getValue());
        }

        int q;
        q = in.nextInt();
        while (q-- > 0) {
            int num;
            num = in.nextInt();
            if (map.containsKey(num))
                System.out.println(map.get(num));
            else
                System.out.println(0);
        }

        in.close();
    }
}

// every operation of map takes time-complexity: O(log n)
