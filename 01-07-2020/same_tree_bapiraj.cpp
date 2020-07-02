class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(not p and not q) return true;
        if(not p or not q) return false;
        return p->val == q->val and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
        
    }
};
