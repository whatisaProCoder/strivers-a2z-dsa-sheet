package Step03_Arrays.Lec2_Medium;

// Majority Element (>n/2 times)
// Optimal : Moore's Voting Algorithm

public class Program_03_optimal {
    public static int majorityElement(int[] nums) {
        int n = nums.length;
        int ele = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                ele = nums[i];
            } else if (nums[i] == ele) {
                cnt++;
            } else {
                cnt--;
            }
        }

        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == ele)
                cnt1++;
        }
        if (cnt1 > n / 2) {
            return ele;
        }
        
        return -1;
    }

    public static void main(String[] args) {
        int[] nums = {2, 2, 1, 1, 1, 2, 2};

        System.out.println("Majority element = " + majorityElement(nums));
    }
}

// Time-complexity  : O(N) (algo) + O[N] (verification, if array
//                                       doesn't have a majority element)
// Space-complexity : O(1)
