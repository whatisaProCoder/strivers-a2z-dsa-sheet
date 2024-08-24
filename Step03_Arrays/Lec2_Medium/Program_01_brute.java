package Step03_Arrays.Lec2_Medium;

// Two sum problem
// Brute : Checking all possible pairs (loops)

public class Program_01_brute {
    public static int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int[] out = new int[2];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
            /*if (i == j)
                continue;*/
                if (nums[i] + nums[j] == target) {
                    out[0] = i;
                    out[1] = j;
                    return out;
                }
            }
        }
        return out;
    }

    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;

        System.out.print("Indices : ");
        for (int element : twoSum(nums, target)) {
            System.out.print(element + " ");
        }
    }
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)
