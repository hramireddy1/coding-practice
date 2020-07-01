# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# A better solution is to convert the tree into one of infix,prefix and
# postfix notations and then compare them


class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        """ Compares if the 2 given trees are equal """
        if (p is None) and (q is None):
            # Both nodes are null
            return True

        elif (p and q) is None:
            # One of the nodes is null
            return False

        elif p.val != q.val:
            # Nodes have different values
            return False

        else:
            # Recursive comparision
            return (self.isSameTree(p.right, q.right) and self.isSameTree(p.left, q.left))
