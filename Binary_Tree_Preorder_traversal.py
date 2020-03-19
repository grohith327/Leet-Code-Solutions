# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        if(not root):
            return []
        traversal = [root]
        output = []
        while(len(traversal) > 0):
            
            node = traversal[-1]
            output.append(node.val)
            traversal = traversal[:-1]
            
            if(node.right is not None):
                traversal.append(node.right)
            if(node.left is not None):
                traversal.append(node.left)
        return output
