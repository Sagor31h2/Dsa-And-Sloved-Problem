class Node:
    def __init__(self, val=None, mini=None, next=None):
        self.val = val
        self.minim = mini
        self.next = next


class MinStack:

    def __init__(self):
        self.head = None

    def push(self, val: int) -> None:
        if self.head == None:
            node = Node(val, val)
            self.head = node
        else:
            node = Node(val, min(val, self.head.minim), self.head)
            self.head = node

    def pop(self) -> None:
        self.head = self.head.next

    def top(self) -> int:
        return self.head.val

    def getMin(self) -> int:
        return self.head.minim


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
