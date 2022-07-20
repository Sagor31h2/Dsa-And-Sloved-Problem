class Node:
    def __init__(self, data) -> None:
        self.val = data
        self.left = None
        self.right = None


def depth(root):
    d = 0
    while root:
        d += 1
        root = root.left
    return d


def PerfactBinary(root, d, level=0):
    if root is None:
        return True
    if root.left is None and root.right is None:
        return d == level+1
    if root.left is None or root.right is None:
        return False
    else:
        return(PerfactBinary(root.left, d, level+1) and PerfactBinary(root.right, d, level+1))


root = Node(1)
root.left = Node(2)
root.right = Node(3)
# root.left.left = Node(4)
# root.left.right = Node(5)
d = depth(root)
print("depth", d)
if PerfactBinary(root, d):
    print("perfact binary")
else:
    print("Not perfact binary")
