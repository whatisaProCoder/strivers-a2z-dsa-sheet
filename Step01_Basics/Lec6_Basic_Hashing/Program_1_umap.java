package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Count elements of array using unordered map

public class Program_1_umap {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
        int n = arr.length;

        // precompute
        Map<Integer, Integer> umap = new HashMap<>();
        for (int element : arr) {
            umap.put(element, umap.getOrDefault(element, 0) + 1);
        }

        // iterate in the map
        System.out.println("Map Structure :");
        for (var mapElement : umap.entrySet()) {
            System.out.println(mapElement.getKey() + " -> " + mapElement.getValue());
        }

        int[] query = {1, 4, 7};
        for (int num : query) {
            System.out.println(umap.getOrDefault(num, 0));
        }
    }
}

// every operation of map takes time-complexity: O(1) & O(n) [worst case]
