
class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None

    def insert(self, data):
        self.root = self._insert_rec(self.root, data)

    def _insert_rec(self, node, data):
        if node is None:
            return TreeNode(data)
        if data < node.data:
            node.left = self._insert_rec(node.left, data)
        elif data > node.data:
            node.right = self._insert_rec(node.right, data)
        return node

    def search(self, key):
        return self._search_rec(self.root, key)

    def _search_rec(self, node, key):
        if node is None:
            return 0
        if key == node.data:
            return 1
        elif key < node.data:
            return self._search_rec(node.left, key)
        else:
            return self._search_rec(node.right, key)

    def inorder(self):
        self._inorder_rec(self.root)
        print()

    def _inorder_rec(self, node):
        if node:
            self._inorder_rec(node.left)
            print(node.data, end=' ')
            self._inorder_rec(node.right)
