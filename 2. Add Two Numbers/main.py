from typing import Optional
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def list_to_linked_list(nums):
    dummy = ListNode()
    current = dummy
    for num in nums:
        current.next = ListNode(num)
        current = current.next
    return dummy.next

def linked_list_to_string(head):
    result = ""
    while head:
        result += str(head.val)
        if head.next:
            result += " -> "
        head = head.next
    return result

t1 = [9,9,9,9,9,9,9]
t2 = [9,9,9,9]
l1 = list_to_linked_list(t1)
l2 = list_to_linked_list(t2)

def addTwoNumbers(l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    remainder = 0
    dummy = ListNode()
    current = dummy
    while l1 and l2 :
        # print(l2.val,l1.val, end=" ")
        total = l2.val + l1.val + remainder
        print("total : ",total)
        if total >= 10 :
            current.next = ListNode(total-10)
            remainder = 1
        else :
            remainder = 0
            current.next = ListNode(total)
        print("remain : ",remainder)
        current = current.next
        l2 = l2.next
        l1 = l1.next
        print("------")

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

    print(linked_list_to_string(dummy.next))

addTwoNumbers(l1,l2)
