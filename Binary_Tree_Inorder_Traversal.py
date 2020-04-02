# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        trav_list = []
        def inorder(root, trav_list):
            if(root):
                inorder(root.left, trav_list)
                trav_list.append(root.val)
                inorder(root.right, trav_list)
        inorder(root, trav_list)
        return trav_list
        
