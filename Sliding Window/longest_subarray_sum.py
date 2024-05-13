def longest_subarray_with_sum(arr, k):
    window_size = 0
    max_len = 0
    l = 0
    for r in range(0,len(arr)):
        window_size += arr[r]
        if window_size == k :
            if max_len < r - l + 1:
                max_len = r - l + 1
        elif window_size < k :
            continue
        else :
            window_size -= arr[l]
            l += 1
    print(max_len)
    pass

'''
The Sliding Window Technique only work on positive elementss
'''
if __name__ == "__main__":
    # Test cases
    arr1 = [10, 5, 2, 7, 1, 0]
    k1 = 15
    print("Test Case 1:")
    print("Input:", arr1, k1)
    print("Output:", longest_subarray_with_sum(arr1, k1))  # Expected output: 4

    
