# 二叉树数据结构TreeNode可用来表示单向链表
# （其中left置空，right为下一个链表节点）。
# 实现一个方法，把二叉搜索树转换为单向链表，要求依然符合二叉搜索树的性质，
# 转换操作应是原址的，也就是在原始的二叉搜索树上直接修改。

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def convertBiNode(self, root: TreeNode) -> TreeNode:
        self.head = self.current = TreeNode(None)   #定义头结点，最后返回头结点的右子节点
        self.inOrder(root)
        return self.head.right

    def inOrder(self, root):
        if not root:
            return
        self.inOrder(root.left)
        root.left = None            #当前节点的左子节点置空
        self.current.right = root   #上个节点的右子节点赋值为当前节点
        self.current = root         #更新当前节点，注意顺序
        self.inOrder(root.right)