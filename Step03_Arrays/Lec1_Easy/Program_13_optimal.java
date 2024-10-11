package Step03_Arrays.Lec1_Easy;

// Find the number that appears once, and other numbers twice.
// Input  : 1 1 2 3 3 4 4
// Output : 2 (APPEARS ONCE)

public class Program_13_optimal {
    public static int appearsOnce(int[] nums) {
        int XOR_ALL = 0;
        for (int element : nums) {
            XOR_ALL = XOR_ALL ^ element;
        }
        return XOR_ALL;

        // XOR_ALL = element that appears once,
        // since all same-elements will cancel out (XOR_ALL = 0)
        // and single element ^ XOR_ALL = required element.
    }

    public static void main(String[] args) {
        int[] nums = { 1, 1, 2, 2, 3, 7, 7, 9, 9 };

        System.out.println("Appears once = " + appearsOnce(nums));
    }
}

// Time-complexity : O(N)
// Space-complexity : O(1)
