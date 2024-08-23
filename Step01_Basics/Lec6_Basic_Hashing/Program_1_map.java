package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Count elements of array using map
public class Program_1_map {
    public static void main(String[] args) {
        int[] arr = {1, 1, 2, 2, 2, 3, 4, 7, 7, 5, 5, 3, 3, 4, 6};
        int n = arr.length;

        // precompute
        SortedMap<Integer, Integer> map = new TreeMap<>();
        for (int key : arr) {
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

        int[] query = {1, 4, 7};
        for (int num : query) {
            if (map.containsKey(num))
                System.out.println(map.get(num));
            else
                System.out.println(0);
        }
    }
}

// every operation of map takes time-complexity: O(log n)
