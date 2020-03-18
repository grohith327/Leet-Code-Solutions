class Solution:
    
    def path_sum(self, root, path, path_len, total, s, total_list):
        
        if(root):
            if(len(path) > path_len):
                path[path_len] = root.val
            else:
                path.append(root.val)
            
            path_len += 1
            total += root.val
            
            if(root.left is None and root.right is None):
                total_list.append(total)
            else:
                self.path_sum(root.left, path, path_len, total, s, total_list)
                self.path_sum(root.right, path, path_len, total, s, total_list)

    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        total_list = []
        self.path_sum(root, [], 0, 0, sum, total_list)
        if(sum in total_list):
            return True
        return False
