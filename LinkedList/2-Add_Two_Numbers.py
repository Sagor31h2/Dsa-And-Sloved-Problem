# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = temp = ListNode()
        d = 0

        # def check(total):
        #     global d
        #     if total >= 10:
        #         r = total % 10
        #         Node = ListNode(r)
        #         d = total//10
        #     else:
        #         Node = ListNode(total)
        #     return Node

        while l1 is not None and l2 is not None:
            total = l1.val+l2.val+d
            if total >= 10:
                r = total % 10
                Node = ListNode(r)
                d = total//10
            else:
                Node = ListNode(total)
                d = 0

            temp.next = Node
            l1 = l1.next
            l2 = l2.next
            temp = temp.next
        while l1 is not None:
            total = l1.val+d
            if total >= 10:
                r = total % 10
                Node = ListNode(r)
                d = total//10
            else:
                Node = ListNode(total)
                d = 0
            temp.next = Node
            l1 = l1.next
            temp = temp.next
        while l2 is not None:
            total = l2.val+d
            if total >= 10:
                r = total % 10
                Node = ListNode(r)
                d = total//10
            else:
                Node = ListNode(total)
                d = 0
            temp.next = Node
            l2 = l2.next
            temp = temp.next
        if(d > 0):
            temp.next = ListNode(d)
        return head.next


if __name__ == "__main__":
    one = ListNode(2)
    two = ListNode(4)
    three = ListNode(7)

    head1 = one
    one.next = two
    two.next = three

    four = ListNode(5)
    five = ListNode(6)
    six = ListNode(4)

    head2 = four
    four.next = five
    five.next = six

    s = Solution()
    h = s.addTwoNumbers(head1, head2)

    while (h != None):
        print(h.val)
        h = h.next
