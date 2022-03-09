# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is None:
            return list2
        if list2 is None:
            return list1

        temp = ListNode()
        headOfTemp = temp

        while(list1 != None and list2 != None):

            if list1.val < list2.val:
                temp.next = list1
                list1 = list1.next
            else:
                temp.next = list2
                list2 = list2.next
            temp = temp.next
        while(list1 != None):
            temp.next = list1
            list1 = list1.next
            temp = temp.next

        while(list2 != None):
            temp.next = list2
            list2 = list2.next
            temp = temp.next
        return headOfTemp.next


if __name__ == "__main__":
    one = ListNode(1)
    two = ListNode(2)
    three = ListNode(4)

    head1 = one
    one.next = two
    two.next = three

    four = ListNode(1)
    five = ListNode(3)
    six = ListNode(4)

    head2 = four
    four.next = five
    five.next = six

    s = Solution()
    h = s.mergeTwoLists(head1, head2)

    while (h != None):
        print(h.val)
        h = h.next
