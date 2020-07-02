class Solution {
public:
    int countNodes(TreeNode* root) {
        int left_path = leftPath(root);
        int right_path = rightPath(root);
        if(left_path == right_path) return (1 << left_path) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
        
    }
    
    int leftPath(TreeNode* root)
    {
        if(not root) return 0;
        return 1+leftPath(root->left);
    }
    
    int rightPath(TreeNode* root)
    {
        if(not root) return 0;
        return 1+rightPath(root->right);
    }
};
