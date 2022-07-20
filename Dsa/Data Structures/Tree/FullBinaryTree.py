class Node:
    def __init__(self, data) -> None:
        self.val = data
        self.left = None
        self.right = None


def IsfullBinary(root):
    if root is None:
        return True
    if root.left is None and root.right is None:
        return True
    if root.left is not None and root.right is not None:
        return(IsfullBinary(root.left) and IsfullBinary(root.right))
    else:
        False


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

if IsfullBinary(root):
    print("full binary")
else:
    print("Not full binary")
