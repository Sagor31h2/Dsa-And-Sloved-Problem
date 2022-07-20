class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.n = None


if __name__ == "__main__":
    one = Node(2)
    two = Node(4)
    three = Node(6)

#  conneting the nodes
    three.n = one
    two.n = three
    head = two

    while(head is not None):
        print(head.data)
        head = head.n
