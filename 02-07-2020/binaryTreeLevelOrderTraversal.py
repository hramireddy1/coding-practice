# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        lvl,lst=0,[]
        self.lob(root,lvl,lst)
        lst.reverse()
        return lst
    
    def lob(self,root: TreeNode,lvl: int,lst):
        if root is None:
            return None
        if len(lst) > lvl:
            lst[lvl].append(root.val)
        else:
            l = [root.val]
            lst.append(l)
        self.lob(root.left,lvl+1,lst)
        self.lob(root.right,lvl+1,lst)