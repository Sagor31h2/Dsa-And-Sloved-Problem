# Node class
class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None


# Linked List class
class LinkedList:
    def __init__(self):
        self.head = None

# Inserting first
# -------------------------------------------------------
    def Insertstart(self, x: int):
        newNode = Node(x)
        if self.head is not None:
            newNode.next = self.head
        self.head = newNode

# Insert Last
# ---------------------------------------------------------
    def InsertLast(self, x: int):
        newNode = Node(x)

        if self.head is None:
            self.head = newNode
        else:
            temp = self.head
            while(temp.next is not None):
                temp = temp.next
            temp.next = newNode

# Insert Nth position
# --------------------------------------------------------
    def InsertNth(self, pos: int, x: int):
        newNode = Node(x)
        pos = pos-2
        temp = self.head
        while(pos > 0):
            temp = temp.next
            pos = pos-1
        holdNext = temp.next
        temp.next = newNode
        newNode.next = holdNext

# Sorting
# -----------------------------------------------------------
    def sortLL(self):
        current = self.head
        if(current is None):
            return
        else:
            while(current is not None):
                cNext = current.next
                while(cNext is not None):
                    if(current.data > cNext.data):
                        temp = current.data
                        current.data = cNext.data
                        cNext.data = temp
                    cNext = cNext.next
                current = current.next

# searching
# ------------------------------------------------------------
    def search(self, x: int):
        temp = self.head
        p = 0
        while(temp is not None):
            if temp.data == x:
                return p
            temp = temp.next
            p = p+1


# Printing
# # ----------------------------------------------------------

    def print(self):
        temp = self.head
        print("list is")
        while(temp is not None):
            print(temp.data, end=" ")
            temp = temp.next
        print()


if __name__ == "__main__":

    ll = LinkedList()
    n = int(input("enter the of list: "))

    for i in range(n):
        print("enter number for inset first")
        x = input()
        ll.Insertstart(x)
    ll.print()
    x = ll.search(3)
    print(x)
