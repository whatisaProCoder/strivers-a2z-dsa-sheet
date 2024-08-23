package Step01_Basics.Lec6_Basic_Hashing;

import java.util.*;

// Find the highest/lowest frequency element

public class Program_3 {
    void frequency(int[] arr) {
        Map<Integer, Integer> umap = new HashMap<>();
        for (int i = 0; i < arr.length; i++) {
            int key = arr[i];
            int frequency = 0;
            if (umap.containsKey(key))
                frequency = umap.get(key);
            frequency++;
            umap.put(key, frequency);
        }

        int maxFreq = 0, minFreq = arr.length;
        int maxEle = 0, minEle = 0;

        // Traverse through map to find the elements.
        for (var it : umap.entrySet()) {
            int count = it.getValue();
            int element = it.getKey();

            if (count > maxFreq) {
                maxEle = element;
                maxFreq = count;
            }
            if (count < minFreq) {
                minEle = element;
                minFreq = count;
            }
        }

        System.out.println("The highest frequency element is : " + maxEle);
        System.out.println("The lowest frequency element is  : " + minEle);
    }

    public static void main(String[] args) {
        int[] arr = {10, 5, 10, 15, 10, 5};

        new Program_3().frequency(arr);
    }
}
