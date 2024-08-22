package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Count elements of array using unordered map

public class Program_1_umap {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        // precompute
        Map<Integer, Integer> umap = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int key = arr[i];
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

        int q;
        q = in.nextInt();
        while (q-- > 0) {
            int num;
            num = in.nextInt();
            if (umap.containsKey(num))
                System.out.println(umap.get(num));
            else
                System.out.println(0);
        }

        in.close();
    }
}

// every operation of map takes time-complexity: O(1) & O(n) [worst case]
