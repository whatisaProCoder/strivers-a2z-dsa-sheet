package Step03_Arrays.Lec2_Medium;

// Sort an array of 0's 1's and 2's
// Better : Use counter variables

public class Program_02_better {
    public static void sortArray(int[] nums) {
        int n = nums.length;
        int count0, count1;
        count0 = count1 = 0;

        for (int element : nums) {
            if (element == 0)
                count0++;
            else if (element == 1)
                count1++;
            else {
            }
        }

        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
        }
        for (int i = count0; i < count0 + count1; i++) {
            nums[i] = 1;
        }
        for (int i = count0 + count1; i < n; i++) {
            nums[i] = 2;
        }
    }

    public static void main(String[] args) {
        int[] nums = { 2, 0, 2, 1, 1, 0 };
        sortArray(nums);
        for (int element : nums) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity : O(2N)
// Space-complexity : O(1)
