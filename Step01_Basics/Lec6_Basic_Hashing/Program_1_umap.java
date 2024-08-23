package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Count elements of array using unordered map

public class Program_1_umap {
    public static void main(String[] args) {
        int[] arr = {1, 1, 2, 2, 2, 3, 4, 7, 7, 5, 5, 3, 3, 4, 6};
        int n = arr.length;

        // precompute
        Map<Integer, Integer> umap = new HashMap<>();
        for (int key : arr) {
            int frequency = 0;
            if (umap.containsKey(key))
                frequency = umap.get(key);
            frequency++;
            umap.put(key, frequency);
        }

        // iterate in the map
        System.out.println("Map Structure :");
        for (var mapElement : umap.entrySet()) {
            System.out.println(mapElement.getKey() + " -> " + mapElement.getValue());
        }

        int[] query = {1, 4, 7};
        for (int num : query) {
            if (umap.containsKey(num))
                System.out.println(umap.get(num));
            else
                System.out.println(0);
        }
    }
}

// every operation of map takes time-complexity: O(1) & O(n) [worst case]
