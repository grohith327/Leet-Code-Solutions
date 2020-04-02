# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class BSTIterator:

    def __init__(self, root: TreeNode):
        self.trav_list = []
        def inorder_trav(root, trav_list):
            if(root):
                inorder_trav(root.left, trav_list)
                trav_list.append(root.val)
                inorder_trav(root.right, trav_list)
        inorder_trav(root, self.trav_list)
        

    def next(self) -> int:
        """
        @return the next smallest number
        """
        item = self.trav_list[0]
        self.trav_list = self.trav_list[1:]
        return item
        

    def hasNext(self) -> bool:
        """
        @return whether we have a next smallest number
        """
        if(len(self.trav_list) > 0):
            return True
        return False
        


# Your BSTIterator object will be instantiated and called as such:
# obj = BSTIterator(root)
# param_1 = obj.next()
# param_2 = obj.hasNext()
