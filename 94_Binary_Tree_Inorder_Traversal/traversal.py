from typing import Optional, List

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        stack = []
        current = root
        
        while current is not None or stack:
            while current is not None:
                stack.append(current)
                current = current.left
            
            current = stack.pop()
            result.append(current.val)
            current = current.right
        
        return result