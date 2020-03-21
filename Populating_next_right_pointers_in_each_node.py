"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""
class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if(not root):
            return root
        node = root
        queue = [node]
        count = 0
        power = 0
        while(len(queue) > 0):
            curr_node = queue[0]
            queue = queue[1:]
            if(curr_node.left is not None):
                queue.append(curr_node.left)
            if(curr_node.right is not None):
                queue.append(curr_node.right)
            count += 1
            if(2**power == count):
                power += 1
                count = 0
            else:
                curr_node.next = queue[0]
        return root
        
