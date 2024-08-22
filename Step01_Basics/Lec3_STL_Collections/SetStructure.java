package Step01_Basics.Lec3_STL_Collections;

import java.util.*;

public class SetStructure {
    public static void main(String[] args) {
        /*
         * Set : stores everything in sorted order
         * stores unique elements only
         */
        Set<Integer> st = new TreeSet<>();

        st.add(1);
        // {1}

        st.add(2);
        // {1,2}

        st.add(4);
        // {1,2,4}

        st.add(3);
        // {1,2,3,4}

        st.add(5);
        // {1,2,3,4,5}

        for (var element : st) {
            System.out.print(element + " ");
        }

        // everything takes O(log n) complexity
    }
}
