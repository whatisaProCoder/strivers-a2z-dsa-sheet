package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Character Hashing using map

public class Program_2_map {
    public static void main(String[] args) {
        String s = "aabbbcccccddddddeeeeee";

        SortedMap<Character, Integer> map = new TreeMap<>();
        for (int i = 0; i < s.length(); i++) {
            char key = s.charAt(i);
            map.put(key, map.getOrDefault(key, 0) + 1);
        }

        // iterate in the map
        System.out.println("Map Structure :");
        for (var mapElement : map.entrySet()) {
            System.out.println(mapElement.getKey() + " -> " + mapElement.getValue());
        }

        char[] query = {'b', 'd'};
        for (char ch : query) {
            System.out.println(map.getOrDefault(ch, 0));
        }
    }
}
