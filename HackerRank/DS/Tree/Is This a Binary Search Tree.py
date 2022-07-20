""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""


def insl(root, l):
    if root == None:
        return None
    insl(root.left, l)
    l.append(root.data)
    insl(root.right, l)


def check_binary_search_tree_(root):
    l = []
    insl(root, l)
    for i in range(len(l)-2):
        if(l[i] >= l[i+1]):
            return False
    return True
