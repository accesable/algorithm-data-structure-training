class Solution {
    public static void main(String[] args) {
        // Create two test lists
        ListNode list1 = createList(new int[] { 1, 2, 4 });
        ListNode list2 = createList(new int[] { 5 });

        // Call the mergeTwoLists method
        ListNode mergedList = mergeTwoLists(list1, list2);

        // Print the merged list
        printList(mergedList);
    }

    public static ListNode createList(int[] values) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        for (int val : values) {
            current.next = new ListNode(val);
            current = current.next;
        }
        return dummy.next;
    }

    public static void printList(ListNode head) {
        while (head != null) {
            System.out.print(head.val + " ");
            head = head.next;
        }
        System.out.println();
    }

    public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        // Implementation goes here
        ListNode dummy1 = new ListNode(0);
        ListNode current1 = dummy1;

        ListNode n1,n2;

        while (true) {
            if (list1==null) {
                current1.next = list2;
                break;
            }
            if (list2==null) {
                current1.next = list1;
                break;
            }
            System.out.print(list1.val+" | "+list2.val+" \\ \n");
            n1 = new ListNode(list1.val);
            n2 = new ListNode(list2.val);
            if (n1.val<=n2.val) {
                n1.next = new ListNode(n2.val);
                current1.next = n1;
            } else{
                n2.next = new ListNode(n1.val);
                current1.next = n2;
            }

            list1 = list1.next;
            list2 = list2.next;
            current1 = current1.next.next;
        }
        return dummy1.next;
    }
}

class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}
