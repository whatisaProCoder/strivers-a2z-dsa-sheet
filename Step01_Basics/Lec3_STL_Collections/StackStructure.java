package Step01_Basics.Lec3_STL_Collections;

import java.util.*;

public class StackStructure {
    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();

        st.push(1);
        // {1}

        st.push(2);
        // {2,1}

        st.push(3);
        // {3,2,1}

        st.push(3);
        // {3,3,2,1}

        st.push(5);
        // {5,3,3,2,1}

        System.out.println(st.peek());
        // prints the top

        st.pop();
        // {3,3,2,1}

        System.out.println(st.peek());
        // prints 3

        System.out.println(st.size());
        // prints size = 4

        System.out.println(st.empty());
        // prints true or false
    }
}
