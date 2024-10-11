package Step03_Arrays.Lec1_Easy;

// Second Largest Element in an Array without sorting
// only for non-negative numbers

@SuppressWarnings("ALL")
public class Program_02 {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 77, 6, 4, 33, 2, 6, 88 };
        int n = arr.length;
        // processing
        int largest = arr[0];
        /*
         * second largest element
         * slargest = Integer.MIN_VALUE
         * if array has negative numbers too
         */
        int slargest = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                slargest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > slargest) {
                slargest = arr[i];
            }
        }

        /*
         * in case if no second largest number is available
         * slargest contains -1 (for slargest=-1 as initialization), or
         * slargest contains Integer.MIN_VALUE (for slargest=Integer.MIN_VALUE as
         * initialization)
         */

        System.out.println("The second largest element : " + slargest);
    }
}
