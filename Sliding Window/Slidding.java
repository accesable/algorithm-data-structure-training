import java.util.Arrays;

public class Slidding {
    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 1, 4, 5, 2, 3, 6};
        int k1 = 3;
        System.out.println("Input: " + Arrays.toString(arr1) + ", K = " + k1);
        System.out.println("Output: " + maxOfSubarrays(arr1, k1));  // Expected output: [3, 3, 4, 5, 5, 5, 6]

        int[] arr2 = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
        int k2 = 4;
        System.out.println("\nInput: " + Arrays.toString(arr2) + ", K = " + k2);
        System.out.println("Output: " + maxOfSubarrays(arr2, k2));  // Expected output: [10, 10, 10, 15, 15, 90, 90]
    }

    private static String maxOfSubarrays(int[] arr, int k) {
        // TODO Auto-generated method stub
        int l = 0 ;
        int r = k - 1;
        int max = 0;
        for(;r<arr.length;r++){
            for( int i = l ; i <= r ;i++){
                if (max < arr[i]) {
                    max = arr[i];
                }
            }
            System.err.println(max);
            l+=1;   
        }
        return  "";
    }
}
