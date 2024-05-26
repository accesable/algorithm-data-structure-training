from typing import List
nums = [-1,0,3,5,9,12] 
target = 9
nums2= [-1,0,3,5,9,12]
target2 = 2

def binarySearch(left : int,right : int,nums : List[int],target : int) -> int:
    if left > right : return -1
    mid = left + (right - left) // 2 
    # print(mid)
    if(nums[mid]==target):
        return mid
    elif(nums[mid]>target):
        return binarySearch(left,mid-1,nums,target)
    elif(nums[mid]<target):
        return binarySearch(mid+1,right,nums,target)
print(binarySearch(0,len(nums)-1,nums,target))