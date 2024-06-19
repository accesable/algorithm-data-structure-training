#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[k] = nums2[j];
                j--;
            } else {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};

int main() {
    // Example test case
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has extra space for nums2
    int m = 3;  // Number of initial elements in nums1
    std::vector<int> nums2 = {2, 5, 6};  // Elements to be merged into nums1
    int n = 3;  // Number of elements in nums2

    // Create a Solution object
    Solution solution;
    
    // Call the merge function
    solution.merge(nums1, m, nums2, n);

    // Print the result
    std::cout << "Merged array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

