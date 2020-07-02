/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> result;
        
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        normal_level_order(root, 0);
        
        reverse(result.begin(), result.end());
        
        return result;
        
    }
    
    void normal_level_order(TreeNode* root , int current_level)
    {
        if(root == NULL)
            return;
        
        
        if (result.empty() || current_level > (result.size() - 1)) {

		    result.push_back(vector<int>());
	    }
        

        result[current_level].push_back(root->val);

        
        normal_level_order(root->left, current_level+1);
        normal_level_order(root->right, current_level+1);
        
        
    }
};