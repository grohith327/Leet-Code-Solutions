class Solution:
    
    def all_path(self, root, path, path_len, nums):
        
        if(root):
            
            if(len(path) > path_len):
                path[path_len] = root.val
                path = path[:path_len+1]
            else:
                path.append(root.val)
            
            path_len += 1
            
            if(root.left is None and root.right is None):
                str_num = list(map(str, path))
                num = int(''.join(str_num))
                nums.append(num)
            else:
                self.all_path(root.left, path, path_len, nums)
                self.all_path(root.right, path, path_len, nums)
    
    def sumNumbers(self, root: TreeNode) -> int:
        nums = []
        self.all_path(root, [], 0, nums)
        return sum(nums)
