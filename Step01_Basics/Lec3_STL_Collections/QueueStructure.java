package Step01_Basics.Lec3_STL_Collections;

import java.util.*;

public class QueueStructure {
    public static void main(String[] args) {
        Queue<Integer> queue = new PriorityQueue<Integer>();

        queue.add(1);
        // {1}

        queue.add(2);
        // {1,2}

        queue.add(4);
        // {1,2,4}

        System.out.println("Elements...");
        for (var element : queue) {
            System.out.print(element + " ");
        }
        System.out.println();

        System.out.println(queue.peek());
        // retrieves the top of the queue

        queue.poll();
        // removes the top of the queue

        System.out.println(queue.peek());
    }
}
