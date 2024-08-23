package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Character Hashing using map

public class Program_2_map {
    public static void main(String[] args) {
        String s = "aabbbcccccddddddeeeeee";

        SortedMap<Character, Integer> map = new TreeMap<>();
        for (int i = 0; i < s.length(); i++) {
            char key = s.charAt(i);
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

        char[] query = {'b', 'd'};
        for (char ch : query) {
            if (map.containsKey(ch))
                System.out.println(map.get(ch));
            else
                System.out.println(0);
        }
    }
}
