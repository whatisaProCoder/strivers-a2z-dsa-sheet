package Step01_Basics.Lec3_STL_Collections;

import java.util.*;

public class MapStructure {
    public static void main(String[] args) {
        // Map stores unique keys in sorted order
        // complexity : O(log n)
        // Map<Unique_Key, Value>
        SortedMap<Integer, Integer> map = new TreeMap<>();

        map.put(1, 2);
        map.put(3, 1);
        map.put(-2, 4);

        System.out.println("Printing map...");
        for (var element : map.entrySet()) {
            System.out.println(element.getKey() + ", " + element.getValue());
        }

        // Unordered Map
        // complexity : O(1), worse case : O(n) [very rare]
        // Unordered Map is not sorted
        Map<Integer, Integer> umap = new HashMap<>();
        umap.put(1, 2);
        umap.put(3, 1);
        umap.put(-2, 4);

        System.out.println("Printing umap...");
        for (var element : umap.entrySet()) {
            System.out.println(element.getKey() + ", " + element.getValue());
        }
    }
}
