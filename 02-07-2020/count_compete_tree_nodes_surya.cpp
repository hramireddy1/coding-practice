class Solution {
public:
    int total_count = 0;
    int countNodes(TreeNode* root) {
        
        parse(root);
        return total_count;
        
    }
    void parse(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        else if(root != NULL)
        {
            total_count += 1;
        }
        parse(root->left);
        parse(root->right);
    }
};