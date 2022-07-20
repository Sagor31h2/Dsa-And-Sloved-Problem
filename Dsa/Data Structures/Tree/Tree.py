from platform import node


class Node:
    def __init__(self, data) -> None:
        self.val = data
        self.left = None
        self.right = None


def Inorder(root):
    if root:
        Inorder(root.left)
        print(root.val)
        Inorder(root.right)


def Postorder(root):
    if root:
        Postorder(root.left)
        Postorder(root.right)
        print(root.val)


def Preorder(root):
    if root:
        print(root.val)
        Preorder(root.left)
        Preorder(root.right)


def height(root):
    if not root:
        return 0
    return max(height(root.left), height(root.right))+1


if __name__ == '__main__':

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print(height(root))
