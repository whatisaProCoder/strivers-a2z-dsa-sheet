package Step01_Basics.Lec3_STL_Collections;

import java.util.*;

public class DequeStructure {
    public static void main(String[] args) {
        Deque<Integer> deque = new ArrayDeque<Integer>();
        deque.add(1);
        // {1}

        deque.add(2);
        // {1,2}

        deque.addFirst(4);
        // {4,1,2}

        deque.addFirst(3);
        // {3,4,1,2}

        deque.removeLast();
        // {3,4,1}

        deque.removeFirst();
        // {4,1}

        // points to the last element
        deque.getLast();
        // points to the first element
        deque.getFirst();
    }
}
