# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
[LeetCode Link]("https://leetcode.com/problems/add-two-numbers/description/)
# Approach
<!-- Describe your approach to solving the problem. -->
Basic while loop to iterate through `l1` and `l2` in parallel ways after that define a pointer to point whichever `ListNode()` still have nodes and loop through that\
`remainder` is assign to 1 if the previous sum of node is greater than 10
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        remainder = 0
        dummy = ListNode()
        current = dummy
        while l1 and l2 :
            # print(l2.val,l1.val, end=" ")
            total = l2.val + l1.val + remainder
            # print("total : ",total)
            if total >= 10 :
                current.next = ListNode(total-10)
                remainder = 1
            else :
                remainder = 0
                current.next = ListNode(total)
            # print("remain : ",remainder)
            current = current.next
            l2 = l2.next
            l1 = l1.next
            # print("------")

        if l1 : p = l1
        else : p = l2 

        # print(linked_list_to_string(p))

        while p :
            total = p.val + remainder
            if total >= 10 :
                current.next = ListNode(total-10)
                remainder = 1
            else :
                remainder = 0
                current.next = ListNode(total)
            current = current.next
            p = p.next
        if remainder == 1:
            current.next = ListNode(remainder)
        return dummy.next
        
```