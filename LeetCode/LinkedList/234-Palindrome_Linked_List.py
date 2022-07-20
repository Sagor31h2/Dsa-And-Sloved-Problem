from inspect import stack
import queue
from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:

        stack = []
        #queue = []
        while(head):
            stack.append(head.val)
           # queue.append(head.val)
            head = head.next

        # temp = head
        # for i in range(0, len(stack)):
        #     if(stack.pop() != queue.pop(0)):
        #         return False

        # saiful bhais solution
        # if we have to check a palindrone,we can traverse half length
        temp = head
        l = len(stack)
        for i in range(0, l//2):
            if stack[i] != stack[l-i-1]:
                return False

        return True


if __name__ == "__main__":
    one = ListNode(1)
    two = ListNode(2)
    three = ListNode(2)
    four = ListNode(1)

    head = one
    one.next = two
    two.next = three
    three.next = four

    s = Solution()
    print(s.isPalindrome(head))
