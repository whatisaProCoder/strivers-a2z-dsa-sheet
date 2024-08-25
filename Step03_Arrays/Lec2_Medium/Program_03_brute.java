package Step03_Arrays.Lec2_Medium;

// Majority Element (>n/2 times)
// Brute : Using Loops

public class Program_03_brute {
    public static int majorityElement(int[] nums) {
        int n = nums.length;
        int cnt;
        for (int i = 0; i < n; i++) {
            cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j])
                    cnt++;
            }
            if (cnt > n / 2)
                return nums[i];
        }

        return -1;
    }

    public static void main(String[] args) {
        int[] nums = {2, 2, 1, 1, 1, 2, 2};

        System.out.println("Majority element = " + majorityElement(nums));
    }
}

// Time-complexity  : O(N^2)
// Space-complexity : O(1)
