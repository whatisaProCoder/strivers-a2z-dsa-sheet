package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Count elements of array using map

public class Program_1_map {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
        int n = arr.length;

        // precompute
        SortedMap<Integer, Integer> map = new TreeMap<>();
        for (int element : arr) {
            map.put(element, map.getOrDefault(element, 0) + 1);
        }

        // iterate in the map
        System.out.println("Map Structure :");
        for (var mapElement : map.entrySet()) {
            System.out.println(mapElement.getKey() + " -> " + mapElement.getValue());
        }

        int[] query = {1, 4, 7};
        for (int num : query) {
            System.out.println(map.getOrDefault(num, 0));
        }
    }
}

// every operation of map takes time-complexity: O(log n)
