import java.util.*;

class Main {
    public static void main(String[] args) {
        // int[] arr = {135, 101, 170, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134};
        int [] arr = {0};
        int n = 1;
        int s = 0;
        
        ArrayList<Integer> result = Solution.subarraySum(arr, n, s);
        
        if (result.size() == 1 && result.get(0) == -1) {
            System.out.println("No subarray with sum " + s + " exists.");
        } else {
            System.out.println("Subarray with sum " + s + " found at indices: " + result.get(0) + " to " + result.get(1));
        }
    }
}

class Solution {
    // Function to find a continuous sub-array which adds up to a given number.
    static ArrayList<Integer> subarraySum(int[] arr, int n, int s) {
        int l = 0;
        int r = 1;
        int sum = arr[l];
        boolean isExisted = false;

        if (sum == s) {
            return new ArrayList<>(Arrays.asList(l + 1, l + 1)); // If the first element itself is equal to s
        }

        for (r = 1; r <= n; r++) {
            if (sum < s) {
                sum += arr[r];
            } else if (sum > s) {
                sum -= arr[l];
                ++l;
                r--; // Adjusting r
            } else {
                isExisted = true;
                break;
            }
            System.out.println("l: " + l + ", r: " + r + ", sum: " + sum);
        }

        if (!isExisted) {
            return new ArrayList<>(Arrays.asList(-1)); // If no subarray is found
        }

        return new ArrayList<>(Arrays.asList(l + 1, r));
    }
    public static double findMaxAverage(int[] nums, int k) {
        double maxAvg = 0;
        int index = 0 ;
        for (int i = 0; i < k; i++) {
            maxAvg += nums[i];
        }
        
        maxAvg /= k;
        
        while (index <= nums.length - k) {
            int sum = 0;
            for (int i = index; i < index + k; i++) {
                sum += nums[i];
            }
            maxAvg = Math.max(maxAvg, (double) sum / k);
            index++;
        }
        
        return maxAvg;

    }
}
