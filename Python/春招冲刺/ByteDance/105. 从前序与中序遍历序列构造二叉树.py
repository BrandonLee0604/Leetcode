# Definition for a binary tree node.
from collections import defaultdict

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def __init__(self):
        self.dic = defaultdict()

    def mybuildTree(self, preorder, inorder, preleft, preright,inleft,inright):
        if preleft > preright:
            return None
        root = TreeNode(preorder[preleft])
        rootIndex = self.dic[preorder[preleft]]
        root.left = self.mybuildTree(preorder, inorder, preleft + 1, rootIndex - inleft + preleft, inleft, rootIndex - 1)
        root.right = self.mybuildTree(preorder, inorder, rootIndex - inleft + preleft + 1, preright, rootIndex + 1, inright)
        return root

    def buildTree(self, preorder, inorder):
        num = len(preorder)
        for i in range(num):
            self.dic[preorder[i]] = i
        return self.mybuildTree(preorder,inorder,0,num-1,0,num-1)

preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
solution = Solution()
solution.buildTree(preorder, inorder)
print(solution)

