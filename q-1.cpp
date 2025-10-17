# ✅ Check if Two Binary Trees are Identical

### 📘 Problem:
Given the roots of two binary trees, check if they are structurally identical and have the same node values.

### 💡 Approach:
- Recursively compare both trees.
- If both nodes are `NULL`, return true.
- If only one is `NULL`, return false.
- Compare `root->val` and then left/right subtrees.

### 🧠 Code:
```cpp
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        return (p->val == q->val) && 
               isSameTree(p->left, q->left) && 
               isSameTree(p->right, q->right);
    }
};
